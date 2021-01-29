#ifndef YANCP_LOOP_H
#define YANCP_LOOP_H

#include <string>
#include <vector>

class Yancp_loop
{
private:
	std::vector<std::string> m_args;
	
public:
	Yancp_loop()
	{
	}

	bool prompt(); 
};
#endif
