<html>
<body>
<title>Raspberry Pi</title>
<h1>Raspberry Pi Remote Control</h1>
<h2>Light Status :{{status}}, Last Modified :{{time}}</h2>
<form action="http://192.168.14.53:4000/redledon">
	<input type="submit" value="Red LED Off">
</form>
<form action="http://192.168.14.53:4000/redledoff">
	<input type="submit" value="Red LED On">
</form>
</body>
</html>
