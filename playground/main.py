import io
import zipfile

with open("test.pbix", "rb") as f:
    z = zipfile.ZipFile(io.BytesIO(f.read()))
    print(z.read("Version").decode())
