# Server Seas

Arrr! In the vast seas o' server management, yer mission be to set up a load balancer on port 11000. This balancer'll divvy up incoming requests 'twixt two identical servers, both sailin' on ports 11001 and 11002. Show yer mettle in the art o' load balancin' by configurin' this crew with precision, keepin' the ship runnin' smooth and fair for all who come aboard.

## Constraints

- The script must be **purely written in bash within the execute.sh file**.

## Output / Evaluation Criteria

- HTTP requests to the load balancer must be distributed evenly between the given two servers.

- The script should only execute if the two servers are running on the specified ports.