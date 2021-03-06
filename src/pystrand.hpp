#ifndef QIPY_STRAND_HELPERS
#define QIPY_STRAND_HELPERS

#include <boost/python/object.hpp>
#include <qi/strand.hpp>

namespace qi
{

namespace py
{

class PyStrand : public Strand
{
public:
  ~PyStrand();
};

/**
 * \return the strand if the object is a functor bound to an actor, nullptr otherwise
 */
qi::Strand* extractStrandFromCallable(const boost::python::object& callable);
/**
 * \return the strand if the python object has one, nullptr otherwise
 */
qi::Strand* extractStrandFromObject(const boost::python::object& obj);

void export_pystrand();

}
}

#endif
