import sys
import json
import os
import shutil
from PyQt5.QtWidgets import QApplication, QMainWindow, QMessageBox, QFileDialog #.QtWidgets
from Ui_GatewayTool import Ui_MainWindow
import DBC_Parser, Excel_Parser, Test_Generator, check1_common


class JsonEditorWindow(QMainWindow, Ui_MainWindow):
    def __init__(self):
        super().__init__()
        self.json_file_path = None
        self.setupUi(self)
        self.MappingPushButton.clicked.connect(self.open_mapping_excel)
        self.DBCPushButton.clicked.connect(self.open_DBC_folder)
        self.OutputPushButton.clicked.connect(self.open_output_folder)
        self.RunDBCPushButton.clicked.connect(self.run_DBC_parser)
        self.RunExcelPushButton.clicked.connect(self.run_excel_parser)
        self.RunTestPushButton.clicked.connect(self.run_test_parser)

    def open_mapping_excel(self):
        options = QFileDialog.Options()
        options |= QFileDialog.DontUseNativeDialog
        file_name, _ = QFileDialog.getOpenFileName(self, 'Open Excel File', '', 'Excel Files (*.xlsx)', options=options)
        if file_name:
            self.MappingLineEdit.setText(file_name)
    
    def open_DBC_folder(self):
        folder_dialog = QFileDialog()
        folder_path = folder_dialog.getExistingDirectory(self, "Open DBC Folder", '')
        if folder_path:
            self.DBCLineEdit.setText(folder_path)
    
    def open_output_folder(self):
        folder_dialog = QFileDialog()
        folder_path = folder_dialog.getExistingDirectory(self, "Open Output Folder", '')
        if folder_path:
            self.OutputLineEdit.setText(folder_path)
    
    def run_DBC_parser(self):
        # ecu_node = self.ECUNodeLineEdit.text()
        # vehicle_node = self.VehicleNodeLineEdit.text()
        try:
            DBC_Parser.main(source_folder_path=self.DBCLineEdit.text(), output_file_path=self.OutputLineEdit.text(), mapping_rule_excel=self.MappingLineEdit.text())
            QMessageBox.information(self, 'Message', 'The DBC is parsed successfully.')
        except Exception as e:
            print(e)
            QMessageBox.critical(self, 'Error', str(e))

    def run_excel_parser(self):
        try:
            check1_common.main(self.MappingLineEdit.text())
            Excel_Parser.main(source_folder_path=self.DBCLineEdit.text(), mapping_rule_excel=self.MappingLineEdit.text())
            QMessageBox.information(self, 'Message', 'The excel is generated successfully.')
        except Exception as e:
            print(e)
            QMessageBox.critical(self, 'Error', str(e))

    def run_test_parser(self):
        try:
            Test_Generator.main(CAN_BUS=self.CANComboBox.currentText(), dbc_name=self.XMLLineEdit.text(), source_folder_path=self.DBCLineEdit.text())
            QMessageBox.information(self, 'Message', 'The test script is generated successfully.')
        except Exception as e:
            print(e)
            QMessageBox.critical(self, 'Error', str(e))


if __name__ == '__main__':
    app = QApplication(sys.argv)

    window = JsonEditorWindow()
    window.show()

    sys.exit(app.exec_())