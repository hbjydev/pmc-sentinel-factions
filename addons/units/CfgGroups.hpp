#define tfp_b_mot_ptrl_UNIT_1_POS {0,-7,0}
#define tfp_b_mot_ptrl_UNIT_2_POS {5,-12,0}
#define tfp_b_mot_ptrl_UNIT_3_POS {-5,-12,0}
#define tfp_b_mot_ptrl_UNIT_4_POS {-5,-17,0}
#define tfp_b_mot_ptrl_h_UNIT_1_POS {0,-7,0}
#define tfp_b_mot_ptrl_h_UNIT_2_POS {5,-12,0}
#define tfp_b_mot_ptrl_h_UNIT_3_POS {-5,-12,0}
#define tfp_b_mot_ptrl_h_UNIT_4_POS {-5,-17,0}

class CfgGroups {
    class WEST {
        class GVAR(blufor_D) {
            name = CSTRING(BLUFOR_DisplayName_D);

            class Infantry {
                name = CSTRING(GroupSet_Infantry);

                class GVAR(blufor_D_inf_sq) {
                    name = CSTRING(Group_I_Squad);
                    GMETA(D);

                    UNIT_0(SERGEANT,GVAR(blufor_D_SquadLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_D_Medic));
                    UNIT_2(CORPORAL,GVAR(blufor_D_Autorifleman));
                    UNIT_3(PRIVATE,GVAR(blufor_D_Rifleman_MCX));

                    UNIT_4(SERGEANT,GVAR(blufor_D_TeamLeader));
                    UNIT_5(CORPORAL,GVAR(blufor_D_Medic));
                    UNIT_6(CORPORAL,GVAR(blufor_D_MissileSpecialist));
                    UNIT_7(PRIVATE,GVAR(blufor_D_Rifleman));
                };

                class GVAR(blufor_D_inf_ft) {
                    name = CSTRING(Group_I_FireTeam);
                    GMETA(D);

                    UNIT_0(SERGEANT,GVAR(blufor_D_TeamLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_D_Medic));
                    UNIT_2(CORPORAL,GVAR(blufor_D_Autorifleman));
                    UNIT_3(PRIVATE,GVAR(blufor_D_Rifleman));
                };

                class GVAR(blufor_D_inf_ft_at) {
                    name = CSTRING(Group_I_FireTeam_AT);
                    GMETA(D);

                    UNIT_0(SERGEANT,GVAR(blufor_D_TeamLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_D_Medic));
                    UNIT_2(CORPORAL,GVAR(blufor_D_MissileSpecialist));
                    UNIT_3(PRIVATE,GVAR(blufor_D_Rifleman));
                };

                class GVAR(blufor_D_inf_ft_aa) {
                    name = CSTRING(Group_I_FireTeam_AA);
                    GMETA(D);

                    UNIT_0(SERGEANT,GVAR(blufor_D_TeamLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_D_Medic));
                    UNIT_2(CORPORAL,GVAR(blufor_D_MissileSpecialist_AA));
                    UNIT_3(PRIVATE,GVAR(blufor_D_Rifleman));
                };

                class GVAR(blufor_D_inf_ft_eod) {
                    name = CSTRING(Group_I_FireTeam_EOD);
                    GMETA(D);

                    UNIT_0(SERGEANT,GVAR(blufor_D_TeamLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_D_Medic));
                    UNIT_2(CORPORAL,GVAR(blufor_D_EOD));
                    UNIT_3(PRIVATE,GVAR(blufor_D_Rifleman));
                };
            };

            class Motorized {
                name = CSTRING(GroupSet_Motorized);

                class GVAR(blufor_D_mot_ptrl) {
                    name = CSTRING(Group_MO_Patrol);
                    GMETA(D);

                    UNIT_0(PRIVATE,GVECH(D,M1165A1));

                    UNIT_XX(1,tfp_b_mot_ptrl_UNIT_1_POS,SERGEANT,GVAR(blufor_D_TeamLeader));
                    UNIT_XX(2,tfp_b_mot_ptrl_UNIT_2_POS,CORPORAL,GVAR(blufor_D_Medic));
                    UNIT_XX(3,tfp_b_mot_ptrl_UNIT_3_POS,CORPORAL,GVAR(blufor_D_Autorifleman));
                    UNIT_XX(4,tfp_b_mot_ptrl_UNIT_4_POS,PRIVATE,GVAR(blufor_D_Rifleman));
                };

                class GVAR(blufor_D_mot_ptrl_h) {
                    name = CSTRING(Group_MO_PatrolHeavy);
                    GMETA(D);

                    UNIT_0(PRIVATE,GVECH(D,M1240A1_M240));

                    UNIT_XX(1,tfp_b_mot_ptrl_h_UNIT_1_POS,SERGEANT,GVAR(blufor_D_TeamLeader));
                    UNIT_XX(2,tfp_b_mot_ptrl_h_UNIT_2_POS,CORPORAL,GVAR(blufor_D_Medic));
                    UNIT_XX(3,tfp_b_mot_ptrl_h_UNIT_3_POS,CORPORAL,GVAR(blufor_D_MissileSpecialist));
                    UNIT_XX(4,tfp_b_mot_ptrl_h_UNIT_4_POS,PRIVATE,GVAR(blufor_D_Rifleman));
                };
            };

            class SpecOps {
                name = CSTRING(GroupSet_SpecOps);

                class GVAR(blufor_D_so_recon) {
                    name = CSTRING(Group_SP_ReconTeam);
                    GMETA(D);

                    UNIT_0(SERGEANT,GVAR(blufor_D_SquadLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_D_Marksman));
                    UNIT_2(CORPORAL,GVAR(blufor_D_Marksman));
                };

                class GVAR(blufor_D_so_recon_vss) {
                    name = CSTRING(Group_SP_ReconTeam_VSS);
                    GMETA(D);

                    UNIT_0(SERGEANT,GVAR(blufor_D_SquadLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_D_Marksman_VSS));
                    UNIT_2(CORPORAL,GVAR(blufor_D_Marksman_VSS));
                };
            };

            class Support {
                name = CSTRING(GroupSet_Support);

                class GVAR(blufor_D_su_gp) {
                    name = CSTRING(Group_SU_GunnerPair);
                    GMETA(D);

                    UNIT_0(SERGEANT,GVAR(blufor_D_Autorifleman));
                    UNIT_1(CORPORAL,GVAR(blufor_D_Autorifleman));
                };
            };
        };

        class GVAR(blufor_W) {
            name = CSTRING(BLUFOR_DisplayName_W);

            class Infantry {
                name = CSTRING(GroupSet_Infantry);

                class GVAR(blufor_W_inf_sq) {
                    name = CSTRING(Group_I_Squad);
                    GMETA(W);

                    UNIT_0(SERGEANT,GVAR(blufor_W_SquadLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_W_Medic));
                    UNIT_2(CORPORAL,GVAR(blufor_W_Autorifleman));
                    UNIT_3(PRIVATE,GVAR(blufor_W_Rifleman_MCX));

                    UNIT_4(SERGEANT,GVAR(blufor_W_TeamLeader));
                    UNIT_5(CORPORAL,GVAR(blufor_W_Medic));
                    UNIT_6(CORPORAL,GVAR(blufor_W_MissileSpecialist));
                    UNIT_7(PRIVATE,GVAR(blufor_W_Rifleman));
                };

                class GVAR(blufor_W_inf_ft) {
                    name = CSTRING(Group_I_FireTeam);
                    GMETA(W);

                    UNIT_0(SERGEANT,GVAR(blufor_W_TeamLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_W_Medic));
                    UNIT_2(CORPORAL,GVAR(blufor_W_Autorifleman));
                    UNIT_3(PRIVATE,GVAR(blufor_W_Rifleman));
                };

                class GVAR(blufor_W_inf_ft_at) {
                    name = CSTRING(Group_I_FireTeam_AT);
                    GMETA(W);

                    UNIT_0(SERGEANT,GVAR(blufor_W_TeamLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_W_Medic));
                    UNIT_2(CORPORAL,GVAR(blufor_W_MissileSpecialist));
                    UNIT_3(PRIVATE,GVAR(blufor_W_Rifleman));
                };

                class GVAR(blufor_W_inf_ft_aa) {
                    name = CSTRING(Group_I_FireTeam_AA);
                    GMETA(W);

                    UNIT_0(SERGEANT,GVAR(blufor_W_TeamLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_W_Medic));
                    UNIT_2(CORPORAL,GVAR(blufor_W_MissileSpecialist_AA));
                    UNIT_3(PRIVATE,GVAR(blufor_W_Rifleman));
                };

                class GVAR(blufor_W_inf_ft_eod) {
                    name = CSTRING(Group_I_FireTeam_EOD);
                    GMETA(W);

                    UNIT_0(SERGEANT,GVAR(blufor_W_TeamLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_W_Medic));
                    UNIT_2(CORPORAL,GVAR(blufor_W_EOD));
                    UNIT_3(PRIVATE,GVAR(blufor_W_Rifleman));
                };
            };

            class Motorized {
                name = CSTRING(GroupSet_Motorized);

                class GVAR(blufor_W_mot_ptrl) {
                    name = CSTRING(Group_MO_Patrol);
                    GMETA(W);

                    UNIT_0(PRIVATE,GVECH(W,M1165A1));

                    UNIT_XX(1,tfp_b_mot_ptrl_UNIT_1_POS,SERGEANT,GVAR(blufor_W_TeamLeader));
                    UNIT_XX(2,tfp_b_mot_ptrl_UNIT_2_POS,CORPORAL,GVAR(blufor_W_Medic));
                    UNIT_XX(3,tfp_b_mot_ptrl_UNIT_3_POS,CORPORAL,GVAR(blufor_W_Autorifleman));
                    UNIT_XX(4,tfp_b_mot_ptrl_UNIT_4_POS,PRIVATE,GVAR(blufor_W_Rifleman));
                };

                class GVAR(blufor_W_mot_ptrl_h) {
                    name = CSTRING(Group_MO_PatrolHeavy);
                    GMETA(W);

                    UNIT_0(PRIVATE,GVECH(W,M1232_M2));

                    UNIT_XX(1,tfp_b_mot_ptrl_h_UNIT_1_POS,SERGEANT,GVAR(blufor_W_TeamLeader));
                    UNIT_XX(2,tfp_b_mot_ptrl_h_UNIT_2_POS,CORPORAL,GVAR(blufor_W_Medic));
                    UNIT_XX(3,tfp_b_mot_ptrl_h_UNIT_3_POS,CORPORAL,GVAR(blufor_W_MissileSpecialist));
                    UNIT_XX(4,tfp_b_mot_ptrl_h_UNIT_4_POS,PRIVATE,GVAR(blufor_W_Rifleman));
                };
            };

            class SpecOps {
                name = CSTRING(GroupSet_SpecOps);

                class GVAR(blufor_W_so_recon) {
                    name = CSTRING(Group_SP_ReconTeam);
                    GMETA(W);

                    UNIT_0(SERGEANT,GVAR(blufor_W_SquadLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_W_Marksman));
                    UNIT_2(CORPORAL,GVAR(blufor_W_Marksman));
                };

                class GVAR(blufor_W_so_recon_vss) {
                    name = CSTRING(Group_SP_ReconTeam_VSS);
                    GMETA(W);

                    UNIT_0(SERGEANT,GVAR(blufor_W_SquadLeader));
                    UNIT_1(CORPORAL,GVAR(blufor_W_Marksman_VSS));
                    UNIT_2(CORPORAL,GVAR(blufor_W_Marksman_VSS));
                };
            };

            class Support {
                name = CSTRING(GroupSet_Support);

                class GVAR(blufor_W_su_gp) {
                    name = CSTRING(Group_SU_GunnerPair);
                    GMETA(W);

                    UNIT_0(SERGEANT,GVAR(blufor_W_Autorifleman));
                    UNIT_1(CORPORAL,GVAR(blufor_W_Autorifleman));
                };
            };
        };
    };
};
