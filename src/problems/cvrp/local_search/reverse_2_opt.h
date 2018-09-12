#ifndef CVRP_REVERSE_TWO_OPT_H
#define CVRP_REVERSE_TWO_OPT_H

/*

This file is part of VROOM.

Copyright (c) 2015-2018, Julien Coupey.
All rights reserved (see LICENSE).

*/

#include "problems/ls_operator.h"

class cvrp_reverse_two_opt : public ls_operator {
private:
  virtual void compute_gain() override;

public:
  cvrp_reverse_two_opt(const input& input,
                       raw_solution& sol,
                       const solution_state& sol_state,
                       index_t source_vehicle,
                       index_t source_rank,
                       index_t target_vehicle,
                       index_t target_rank);

  virtual bool is_valid() const override;

  virtual void apply() const override;

  virtual std::vector<index_t> addition_candidates() const override;
};

#endif
