<title>Донат в Free Fire</title> <style> * { box-sizing: border-box; margin: 0; padding: 0; }
body {
  font-family: 'Arial', sans-serif;
  scroll-behavior: smooth;
  background-color: #fff;
}

header.hero {
  background-image: url('https://cdn.openai.com/chat-files/210EF0AE-5044-484A-BE3F-6C5B3CC968B4.jpeg');
  background-size: cover;
  background-position: center;
  height: 100vh;
  display: flex;
  justify-content: center;
  align-items: center;
  text-align: center;
  color: white;
  position: relative;
}

.hero::after {
  content: "";
  position: absolute;
  top: 0; left: 0; right: 0; bottom: 0;
  background: rgba(0, 0, 0, 0.4);
}

.hero-content {
  position: relative;
  z-index: 1;
  padding: 20px;
}

.hero-content h1 {
  font-size: 2.5em;
  margin-bottom: 20px;
}

.btn {
  padding: 12px 25px;
  background-color: #ff3d00;
  color: white;
  text-decoration: none;
  border-radius: 8px;
  font-weight: bold;
  font-size: 1.1em;
  transition: background 0.3s;
}

.btn:hover {
  background-color: #e53900;
}

section#donate {
  padding: 60px 20px;
  background: #f9f9f9;
  text-align: center;
}

section#donate h2 {
  font-size: 2em;
  margin-bottom: 20px;
}

form {
  max-width: 400px;
  margin: 0 auto;
  text-align: left;
  background: white;
  padding: 30px;
  border-radius: 10px;
  box-shadow: 0 0 10px rgba(0,0,0,0.1);
}

label {
  display: block;
  margin-bottom: 10px;
  font-weight: bold;
}

input, select {
  width: 100%;
  padding: 10px;
  margin-bottom: 20px;
  border-radius: 5px;
  border: 1px solid #ccc;
}

button[type="submit"] {
  width: 100%;
  background-color: #ff3d00;
  color: white;
  border: none;
  padding: 12px;
  border-radius: 5px;
  font-size: 1em;
  font-weight: bold;
  cursor: pointer;
}

button[type="submit"]:hover {
  background-color: #e53900;
}

@media (max-width: 600px) {
  .hero-content h1 {
    font-size: 2em;
  }

  .btn {
    font-size: 1em;
    padding: 10px 20px;
  }
}