#include "mc/mc.hh"
#include "mc/units/worker.hh"

namespace pnmc { namespace mc {

/*------------------------------------------------------------------------------------------------*/

mc::mc(const conf::pnmc_configuration& conf)
  : impl_(mk_impl(conf))
{}

/*------------------------------------------------------------------------------------------------*/

std::unique_ptr<mc_impl>
mc::mk_impl(const conf::pnmc_configuration& conf)
{
  return std::unique_ptr<mc_impl>(new units::worker(conf));
}

/*------------------------------------------------------------------------------------------------*/

void
mc::operator()(const pn::net& net)
const
{
  impl_->operator()(net);
}

/*------------------------------------------------------------------------------------------------*/

}} // namespace pnmc::mc
