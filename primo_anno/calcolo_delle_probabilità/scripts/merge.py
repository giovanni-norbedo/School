import os
from PyPDF2 import PdfMerger

# Path to the folder containing the PDF files
folder_path = "../lezioni"

# Create a PdfMerger object
merger = PdfMerger()

# Iterate over the PDF files in the folder and order them by name
for filename in sorted(os.listdir(folder_path)):
    if filename.endswith(".pdf"):
        file_path = os.path.join(folder_path, filename)
        merger.append(file_path)
        print(f"Added {filename}")

# Output file path for the merged PDF
output_path = "../merged.pdf"

# Merge the PDF files and save the output
merger.write(output_path)
merger.close()

print("PDF files merged successfully!")