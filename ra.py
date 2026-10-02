import PyPDF2

with open("me_b.tech_evaluation-scheme-syllabus-min.pdf", "rb") as f:  # <-- apna PDF file naam yaha do
    reader = PyPDF2.PdfReader(f)
    for i, page in enumerate(reader.pages, start=1):
        text = page.extract_text() or ""
        if "Complex Analysis & Integral Transform".lower() in text.lower():
            print("Found on page:", i)
