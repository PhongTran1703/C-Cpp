#include<memory>

auto factory()
{
	return std::make_unique<int>();
}
int main(){

	auto widget = factory();
}
