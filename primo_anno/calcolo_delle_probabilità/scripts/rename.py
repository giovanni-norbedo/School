import os

def rename_files():
    files = os.listdir('../lezioni')

    for file in files:
        parts = file.split(' ')
        number = parts[1].split('.')[0]
        new_name = number + '.pdf'
        os.rename('lezioni/' + file, 'lezioni/' + new_name)
        
    print('Files renamed')
    
rename_files()