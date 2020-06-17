#include "main.h"

int main() {

    //Initialize cURL for usage program wide
    curl_global_init(CURL_GLOBAL_ALL);

	OFSNet net("http://127.0.0.1");

	if(!fs::exists("remote")) {
		fs::create_directory("remote");
	}
	if(!fs::exists("local")) {
		fs::create_directory("local");
	}

	net.fetchDatabase();

	OFSGui g;

	if(!g.isOk()) {
		std::cout << g.getError() << std::endl;
		return 1;
	}

	while(g.loop()) {
	}
}
