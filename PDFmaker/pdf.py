
from fpdf import FPDF
import json
from datetime import date

#-- import and load .json file & get date and time

with open("/home/dimitrios/Dokumente/test.json", "r") as rf:
    data = json.load(rf)

today = date.today()
d1 = today.strftime("%d - %m - %Y")

#----------------------------------

#-- Structure the content from the .json file

date = data["date"] #creation date of report
s_version = data["softwareVersion"] 
tester = data["tester"] 
d_name = data["deviceName"]
s_nummber = data["serialNumber"]
p_o_number = data["productionOrderNumber"]
m_Number = data["materialNumber"]

#----------------------------------

#--- Index Content ----------------

chap1 = "Kapitel 1: Device and Tester" 
chap2 = "Kapitel 2: Measurement Pictures"
chap3 = "Kapitel 3: Measurement Results"
chap4 = "Kapitel 4: Software"

#-----------------------------------




def create_title(s_version, today, pdf):
    pdf.set_font('Arial', 'B', 45)
    pdf.ln(60)
    pdf.cell(80)
    pdf.cell(20, 10, "Title", 0, 0, "C")
    pdf.ln(10)
    pdf.set_font('Arial', 'B', 16)
    pdf.cell(80)
    pdf.cell(20, 10, f"{today}" , 0, 0, "C")
    pdf.ln(5)
    pdf.cell(80)
    pdf.cell(20, 10, f"Software Version :{s_version}" , 0, 0, "C")
    pdf.ln(5)

def create_index_link(entry, n):
    pdf.set_font("Arial", "U", 30)
    pdf.set_text_color(51, 102, 153)
    to_page = pdf.add_link()
    pdf.set_link(to_page, page=n)
    pdf.cell(80)
    pdf.cell(20, 10, f"{entry}" , 0, 0, "C", link=to_page)
    pdf.ln(20)
    




pdf = FPDF()
pdf.add_page()
create_title(s_version, d1, pdf)


pdf.add_page()
n= 3
pdf.ln(30)
create_index_link(chap1, n)
create_index_link(chap2, n)
create_index_link(chap3, n)
create_index_link(chap4, n)


pdf.add_page()
pdf.ln(10)
pdf.image("wat.png", w = 180, h = 150)



pdf.output('tuto1.pdf', 'F')