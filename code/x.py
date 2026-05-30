import requests


def save_to_local(html_content, local_path):
    with open(local_path, 'wb') as f:
        f.write(html_content)

r = requests.get("https://google.com")
save_to_local(r.content, "C:\\Users\\weriz\\Desktop\\test_local_webpage")
