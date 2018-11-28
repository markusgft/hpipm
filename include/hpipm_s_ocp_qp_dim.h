/**************************************************************************************************
*                                                                                                 *
* This file is part of HPIPM.                                                                     *
*                                                                                                 *
* HPIPM -- High-Performance Interior Point Method.                                                *
* Copyright (C) 2017-2018 by Gianluca Frison.                                                     *
* Developed at IMTEK (University of Freiburg) under the supervision of Moritz Diehl.              *
* All rights reserved.                                                                            *
*                                                                                                 *
* This program is free software: you can redistribute it and/or modify                            *
* it under the terms of the GNU General Public License as published by                            *
* the Free Software Foundation, either version 3 of the License, or                               *
* (at your option) any later version                                                              *.
*                                                                                                 *
* This program is distributed in the hope that it will be useful,                                 *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                                   *
* GNU General Public License for more details.                                                    *
*                                                                                                 *
* You should have received a copy of the GNU General Public License                               *
* along with this program.  If not, see <https://www.gnu.org/licenses/>.                          *
*                                                                                                 *
* The authors designate this particular file as subject to the "Classpath" exception              *
* as provided by the authors in the LICENSE file that accompained this code.                      *
*                                                                                                 *
* Author: Gianluca Frison, gianluca.frison (at) imtek.uni-freiburg.de                             *
*                                                                                                 *
**************************************************************************************************/

#ifndef HPIPM_S_OCP_QP_DIM_H_
#define HPIPM_S_OCP_QP_DIM_H_



#ifdef __cplusplus
extern "C" {
#endif



struct s_ocp_qp_dim
	{
	int *nx; // number of states
	int *nu; // number of inputs
	int *nb; // number of box constraints
	int *nbx; // number of state box constraints
	int *nbu; // number of input box constraints
	int *ng; // number of general constraints
	int *ns; // number of soft constraints
	int *nsbx;
	int *nsbu;
	int *nsg; // number of soft general constraints
	int N; // horizon length
	int memsize;
	};



//
int s_sizeof_ocp_qp_dim();
//
int s_memsize_ocp_qp_dim(int N);
//
void s_create_ocp_qp_dim(int N, struct s_ocp_qp_dim *qp_dim, void *memory);
//
void s_cvt_int_to_ocp_qp_dim(int N, int *nx, int *nu, int *nbx, int *nbu, int *ng, int *ns, struct s_ocp_qp_dim *dim);
//
void s_set_ocp_qp_dim(char *field, int stage, int in, struct s_ocp_qp_dim *dim);
//
void s_set_ocp_qp_dim_nx(int stage, int nx, struct s_ocp_qp_dim *dim);
//
void s_set_ocp_qp_dim_nu(int stage, int nu, struct s_ocp_qp_dim *dim);
//
void s_set_ocp_qp_dim_nbx(int stage, int nbx, struct s_ocp_qp_dim *dim);
//
void s_set_ocp_qp_dim_nbu(int stage, int nbu, struct s_ocp_qp_dim *dim);
//
void s_set_ocp_qp_dim_ng(int stage, int ng, struct s_ocp_qp_dim *dim);
//
void s_set_ocp_qp_dim_ns(int stage, int ns, struct s_ocp_qp_dim *dim);



#ifdef __cplusplus
}	// #extern "C"
#endif



#endif // HPIPM_S_OCP_QP_DIM_H_
