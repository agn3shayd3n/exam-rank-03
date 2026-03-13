*This project has been created as part of the 42 curriculum by agnesgar*

--------------------------------
☆ Description ☆
--------------------------------

NetPractice is an introductory networking project focused on configuring small-scale networks. The goal is to understand how TCP/IP addressing works and how devices communicate within a network.

The project explores fundamental networking concepts such as:

✧ IP addressing
✧ Subnet masks
✧ Default gateways
✧ Routing between networks

NetPractice consists of 10 levels. Each level presents a broken network diagram that must be repaired by assigning the correct:

✧ IP addresses
✧ Subnet masks
✧ Routing configurations

By solving these scenarios, you develop a practical understanding of how routers, switches, and gateways allow devices to communicate across networks.

--------------------------------
☆ Instructions ☆
--------------------------------

1. Download the project archive from the project page and extract it into a folder.
2. Inside that folder, run the launch script: _bash run.sh_

This starts a local web server and opens the NetPractice interface in your browser.

Warning (!)
If run.sh doesn't work, you can access the project manually:
	run: python3 -m http.server 49242 (you may change the port number)
	then open "http://localhost:49242" in your browser (or any other port you've chosen)

3. Start the exercises

On the welcome page:
Enter your 42 login in the provided field (this step ensures that exported files are linked to your personal configuration.)
Click Start
You can then choose between:
Training → practice all 10 levels at your own pace
Evaluation → generate a random network configuration (levels 7–10) similar to the evaluation environment

When a level is completed, a button named "Get Config" will appear and you will be able to download the .json of each level for evaluation.

--------------------------------
☆ Submission details ☆
--------------------------------

According to the evaluation sheet, there has to be 10 exported configuration files (one per level), and they must be located at the repository root, + this README.md.

--------------------------------
☆ Resources ☆
--------------------------------

(!) Introduction to Networking * Hack the Box:
Covers concepts such as:

	✧ TCP/IP addressing
	✧ subnet masks
	✧ default gateways
	✧ routers and switches
	✧ OSI layers
	✧ IPv4 vs IPv6
	✧ MAC addresses
	✧ common protocols (HTTP, HTTPS, FTP, TCP)

(!) You suck at subnetting * NetworkChuck
Topics covered:

	✧ TCP/IP addressing
	✧ subnet masks
	✧ default gateways
	✧ IPv4 vs IPv6
	✧ CIDR notation

(!) NetPractice: An Intro to IP Addresses and Subnets * Thuggonaut
Focuses on:

	✧ IP addressing
	✧ subnetting
	✧ gateways
	✧ basic routing concepts

--------------------------------
☆ Use of AI ☆
--------------------------------

AI tools were occasionally used to:

vVerify the correctness of network configurations.
Clarify specific networking concepts during the learning process.