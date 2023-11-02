# Cal Poly CARP SOC

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0) [![CI](https://github.com/Cal-Poly-RAMP/tapeout-ci-2311/actions/workflows/user_project_ci.yml/badge.svg)](https://github.com/Cal-Poly-RAMP/tapeout-ci-2311/actions/workflows/user_project_ci.yml) 


## Checklist for Open-MPW Submission
=================================

-  [x] The project repo adheres to the same directory structure in this
   repo.
-  [x] The project repo contain info.yaml at the project root.
-  [x] Top level macro is named ``user_project_wrapper``.
-  [ ] Full Chip Simulation passes for RTL and GL (gate-level)
-  [x] The hardened Macros are LVS and DRC clean
-  [x] The project contains a gate-level netlist for ``user_project_wrapper`` at verilog/gl/user_project_wrapper.v
-  [x] The hardened ``user_project_wrapper`` adheres to the same pin
   order specified at
   `pin\_order <https://github.com/efabless/caravel/blob/master/openlane/user_project_wrapper_empty/pin_order.cfg>`__
-  [x] The hardened ``user_project_wrapper`` adheres to the fixed wrapper configuration specified at `fixed_wrapper_cfgs <https://github.com/efabless/caravel/blob/master/openlane/user_project_wrapper_empty/fixed_wrapper_cfgs.tcl>`__
-  [x] XOR check passes with zero total difference.
-  [x] Openlane summary reports are retained under ./signoff/
-  [x] The design passes the `mpw-precheck <https://github.com/efabless/mpw_precheck>`__ 
