Tasks
Task 0: World Wide Web
Mandatory

Score: 0.0% (Checks completed: 0.0%)

Configure your domain zone so that the subdomain www points to your load-balancer IP (lb-01). Let’s also add other subdomains to make our life easier, and write a Bash script that will display information about subdomains.

Requirements:

    Add the subdomain www to your domain, point it to your lb-01 IP (your domain name might be configured with default subdomains, feel free to remove them)
        Add the subdomain lb-01 to your domain, point it to your lb-01 IP
	    Add the subdomain web-01 to your domain, point it to your web-01 IP
	        Add the subdomain web-02 to your domain, point it to your web-02 IP
		    Your Bash script must accept 2 arguments:
		            domain: Domain name to audit (mandatory: yes)
			            subdomain: Specific subdomain to audit (mandatory: no)
				        Output: The subdomain [SUB_DOMAIN] is a [RECORD_TYPE] record and points to [DESTINATION]
					    When only the parameter domain is provided, display information for its subdomains www, lb-01, web-01, and web-02 - in this specific order
					        When passing domain and subdomain parameters, display information for the specified subdomain
						    Ignore shellcheck case SC2086
						        Must use:
							        awk
								        at least one Bash function

Example:

less

sylvain@ubuntu$ ./0-world_wide_web holberton.online
The subdomain www is a A record and points to 54.210.47.110
The subdomain lb-01 is a A record and points to 54.210.47.110
The subdomain web-01 is a A record and points to 34.198.248.145
The subdomain web-02 is a A record and points to 54.89.38.100
sylvain@ubuntu$
sylvain@ubuntu$ ./0-world_wide_web holberton.online web-02
The subdomain web-02 is a A record and points to 54.89.38.100
sylvain@ubuntu$

Repo:

GitHub repository: alx-system_engineering-devops

Directory: 0x10-https_ssl

File: 0-world_wide_web
Task 1: HAproxy SSL termination
Mandatory

Score: 0.0% (Checks completed: 0.0%)

“Terminating SSL on HAproxy” means that HAproxy is configured to handle encrypted traffic, unencrypt it, and pass it on to its destination.

Requirements:

    HAproxy must be listening on port TCP 443
        HAproxy must be accepting SSL traffic
	    HAproxy must serve encrypted traffic that will return the / of your web server
	        When querying the root of your domain name, the page returned must contain Holberton School
		    Share your HAproxy config as an answer file (/etc/haproxy/haproxy.cfg)
		        The file 1-haproxy_ssl_termination must be your HAproxy configuration file

Make sure to install HAproxy 1.5 or higher, SSL termination is not available before v1.5.

Example:

scss

sylvain@ubuntu$ curl -sI https://www.holberton.online
HTTP/1.1 200 OK
Server: nginx/1.4.6 (Ubuntu)
Date: Tue, 28 Feb 2017 01:52:04 GMT
Content-Type: text/html
Content-Length: 30
Last-Modified: Tue, 21 Feb 2017 07:21:32 GMT
ETag: "58abea7c-1e"
X-Served-By: 03-web-01
Accept-Ranges: bytes
sylvain@ubuntu$
sylvain@ubuntu$ curl https://www.holberton.online
Holberton School for the win!
sylvain@ubuntu$

Repo: