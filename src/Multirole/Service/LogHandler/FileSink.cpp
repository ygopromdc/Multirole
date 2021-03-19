#include "FileSink.hpp"

#include <iostream>

#include "StreamFormat.hpp"

namespace Ignis::Multirole::LogHandlerDetail
{

FileSink::FileSink(const boost::filesystem::path& p) :
	f(p)
{}

FileSink::~FileSink() = default;

void FileSink::Log(const Timestamp& ts, const SinkLogProps& props, std::string_view str) noexcept
{
	StreamFormat(f, ts, props, str);
}

} // namespace Ignis::Multirole::LogHandlerDetail
