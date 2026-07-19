/* Function at 0x806F3D90, size=1652 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r17 */
/* Calls: 46 function(s) */

int FUN_806F3D90(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r17 */
    /* stmw r17, 0x14(r1) */ // 0x806F3D9C
    r27 = r3;
    /* li r29, 0 */ // 0x806F3DA4
    /* lis r20, 0 */ // 0x806F3DA8
    /* li r23, 1 */ // 0x806F3DAC
    /* lis r22, 0 */ // 0x806F3DB0
    /* lis r24, 0 */ // 0x806F3DB4
    /* li r26, 2 */ // 0x806F3DB8
    /* li r25, 0x14 */ // 0x806F3DBC
    /* lis r19, 0 */ // 0x806F3DC0
    /* b 0x806f43d4 */ // 0x806F3DC4
    r4 = r29;
    FUN_806E9970(r4); // bl 0x806E9970
    /* clrlwi r28, r3, 0x18 */ // 0x806F3DD0
    r3 = *(0 + r20); // lwz @ 0x806F3DD4
    r4 = r28;
    FUN_806E44C0(r4, r4); // bl 0x806E44C0
    if (==) goto 0x0x806f3e04;
    r3 = *(0 + r20); // lwz @ 0x806F3DE8
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3DF4
    r3 = r27 + r0; // 0x806F3DF8
    r0 = *(3 + r3); // lbz @ 0x806F3DFC
    /* b 0x806f3e2c */ // 0x806F3E00
    r3 = *(0 + r20); // lwz @ 0x806F3E04
    r4 = r28;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3e28;
    r0 = r28 rlwinm 3; // rlwinm
    r3 = r27 + r0; // 0x806F3E1C
    r0 = *(0x13 + r3); // lbz @ 0x806F3E20
    /* b 0x806f3e2c */ // 0x806F3E24
    /* li r0, 0 */ // 0x806F3E28
    if (!=) goto 0x0x806f43d0;
    r3 = *(0 + r20); // lwz @ 0x806F3E34
    r4 = r28;
    FUN_806E4438(r4); // bl 0x806E4438
    if (!=) goto 0x0x806f3e50;
    /* li r4, 0 */ // 0x806F3E48
    /* b 0x806f3f7c */ // 0x806F3E4C
    r3 = *(0 + r20); // lwz @ 0x806F3E50
    r4 = r28;
    FUN_806E44C0(r4, r4); // bl 0x806E44C0
    if (==) goto 0x0x806f3e74;
    r0 = r28 rlwinm 2; // rlwinm
    r3 = r27 + r0; // 0x806F3E68
    r4 = *(0x70 + r3); // lwz @ 0x806F3E6C
    /* b 0x806f3f7c */ // 0x806F3E70
    r3 = *(0 + r20); // lwz @ 0x806F3E74
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    r21 = r3;
    r3 = *(0 + r22); // lwz @ 0x806F3E84
    /* li r4, 0 */ // 0x806F3E88
    FUN_806E9970(r4, r4); // bl 0x806E9970
    if (==) goto 0x0x806f3eac;
    r3 = *(0 + r22); // lwz @ 0x806F3E98
    /* li r4, 1 */ // 0x806F3E9C
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f3ec4;
    r3 = *(0 + r20); // lwz @ 0x806F3EAC
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3EB8
    /* lbzx r4, r27, r0 */ // 0x806F3EBC
    /* b 0x806f3eec */ // 0x806F3EC0
    r3 = *(0 + r20); // lwz @ 0x806F3EC4
    r4 = r28;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3ee8;
    r0 = r28 rlwinm 3; // rlwinm
    r3 = r27 + r0; // 0x806F3EDC
    r4 = *(0x10 + r3); // lbz @ 0x806F3EE0
    /* b 0x806f3eec */ // 0x806F3EE4
    /* li r4, 0 */ // 0x806F3EE8
    r0 = r28 rlwinm 3; // rlwinm
    r17 = r27 + r0; // 0x806F3EF0
    r3 = r17 + r21; // 0x806F3EF4
    r0 = *(0x16 + r3); // lbz @ 0x806F3EF8
    if (!=) goto 0x0x806f3f78;
    r3 = *(0 + r20); // lwz @ 0x806F3F04
    r4 = r28;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f3f34;
    r3 = *(0 + r20); // lwz @ 0x806F3F18
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3F24
    r3 = r27 + r0; // 0x806F3F28
    r0 = *(3 + r3); // lbz @ 0x806F3F2C
    /* b 0x806f3f54 */ // 0x806F3F30
    r3 = *(0 + r20); // lwz @ 0x806F3F34
    r4 = r28;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3f50;
    r0 = *(0x13 + r17); // lbz @ 0x806F3F48
    /* b 0x806f3f54 */ // 0x806F3F4C
    /* li r0, 0 */ // 0x806F3F50
    if (!=) goto 0x0x806f3f78;
    r0 = *(0x15 + r17); // lbz @ 0x806F3F5C
    r3 = r23 << r21; // slw
    /* li r4, 2 */ // 0x806F3F64
    /* and. r0, r3, r0 */ // 0x806F3F68
    if (==) goto 0x0x806f3f7c;
    /* li r4, 1 */ // 0x806F3F70
    /* b 0x806f3f7c */ // 0x806F3F74
    /* li r4, 0 */ // 0x806F3F78
    if (!=) goto 0x0x806f3fa4;
    r3 = *(0 + r20); // lwz @ 0x806F3F84
    r4 = r28;
    FUN_806E4530(r4, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3F90
    r3 = r27 + r0; // 0x806F3F94
    *(1 + r3) = r25; // stb @ 0x806F3F98
    *(3 + r3) = r26; // stb @ 0x806F3F9C
    /* b 0x806f43d0 */ // 0x806F3FA0
    r3 = r28 rlwinm 2; // rlwinm
    r0 = r28 rlwinm 3; // rlwinm
    r17 = r27;
    /* li r18, 0 */ // 0x806F3FB0
    r30 = r27 + r3; // 0x806F3FB4
    r31 = r27 + r0; // 0x806F3FB8
    /* b 0x806f411c */ // 0x806F3FBC
    r3 = *(0 + r20); // lwz @ 0x806F3FC0
    r4 = r18;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f4114;
    r3 = *(0 + r20); // lwz @ 0x806F3FD4
    r4 = r18;
    FUN_806E4438(r4); // bl 0x806E4438
    if (!=) goto 0x0x806f3ff0;
    /* li r4, 0 */ // 0x806F3FE8
    /* b 0x806f4104 */ // 0x806F3FEC
    r3 = *(0 + r20); // lwz @ 0x806F3FF0
    r4 = r18;
    FUN_806E44C0(r4, r4); // bl 0x806E44C0
    if (==) goto 0x0x806f400c;
    r4 = *(0x70 + r30); // lwz @ 0x806F4004
    /* b 0x806f4104 */ // 0x806F4008
    r3 = *(0 + r20); // lwz @ 0x806F400C
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    r21 = r3;
    r3 = *(0 + r22); // lwz @ 0x806F401C
    /* li r4, 0 */ // 0x806F4020
    FUN_806E9970(r4, r4); // bl 0x806E9970
    if (==) goto 0x0x806f4044;
    r3 = *(0 + r22); // lwz @ 0x806F4030
    /* li r4, 1 */ // 0x806F4034
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f405c;
    r3 = *(0 + r20); // lwz @ 0x806F4044
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F4050
    /* lbzx r4, r27, r0 */ // 0x806F4054
    /* b 0x806f407c */ // 0x806F4058
    r3 = *(0 + r20); // lwz @ 0x806F405C
    r4 = r28;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f4078;
    r4 = *(0x10 + r31); // lbz @ 0x806F4070
    /* b 0x806f407c */ // 0x806F4074
    /* li r4, 0 */ // 0x806F4078
    r3 = r17 + r21; // 0x806F407C
    r0 = *(0x16 + r3); // lbz @ 0x806F4080
    if (!=) goto 0x0x806f4100;
    r3 = *(0 + r20); // lwz @ 0x806F408C
    r4 = r28;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f40bc;
    r3 = *(0 + r20); // lwz @ 0x806F40A0
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F40AC
    r3 = r27 + r0; // 0x806F40B0
    r0 = *(3 + r3); // lbz @ 0x806F40B4
    /* b 0x806f40dc */ // 0x806F40B8
    r3 = *(0 + r20); // lwz @ 0x806F40BC
    r4 = r28;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f40d8;
    r0 = *(0x13 + r31); // lbz @ 0x806F40D0
    /* b 0x806f40dc */ // 0x806F40D4
    /* li r0, 0 */ // 0x806F40D8
    if (!=) goto 0x0x806f4100;
    r0 = *(0x15 + r17); // lbz @ 0x806F40E4
    r3 = r23 << r21; // slw
    /* li r4, 2 */ // 0x806F40EC
    /* and. r0, r3, r0 */ // 0x806F40F0
    if (==) goto 0x0x806f4104;
    /* li r4, 1 */ // 0x806F40F8
    /* b 0x806f4104 */ // 0x806F40FC
    /* li r4, 0 */ // 0x806F4100
    if (==) goto 0x0x806f4114;
    /* li r0, 0 */ // 0x806F410C
    /* b 0x806f4130 */ // 0x806F4110
    r3 = *(0 + r24); // lwz @ 0x806F411C
    r0 = *(0x24 + r3); // lbz @ 0x806F4120
    if (<) goto 0x0x806f3fc0;
    /* li r0, 1 */ // 0x806F412C
    if (==) goto 0x0x806f41a8;
    r3 = *(0 + r20); // lwz @ 0x806F4138
    r4 = r28;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f4168;
    r3 = *(0 + r20); // lwz @ 0x806F414C
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F4158
    r3 = r27 + r0; // 0x806F415C
    r17 = *(1 + r3); // lbz @ 0x806F4160
    /* b 0x806f4188 */ // 0x806F4164
    r3 = *(0 + r20); // lwz @ 0x806F4168
    r4 = r28;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f4184;
    r17 = *(0x11 + r31); // lbz @ 0x806F417C
    /* b 0x806f4188 */ // 0x806F4180
    /* li r17, 0x14 */ // 0x806F4184
    r3 = *(0 + r20); // lwz @ 0x806F4188
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F4194
    r3 = r27 + r0; // 0x806F4198
    *(1 + r3) = r17; // stb @ 0x806F419C
    *(3 + r3) = r26; // stb @ 0x806F41A0
    /* b 0x806f43d0 */ // 0x806F41A4
    r3 = *(0 + r19); // lwz @ 0x806F41A8
    r4 = *(0xa0 + r30); // lwz @ 0x806F41AC
    r0 = *(0x20 + r3); // lwz @ 0x806F41B0
    /* subf r0, r4, r0 */ // 0x806F41B4
    if (<=) goto 0x0x806f43d0;
    r17 = r27;
    /* li r18, 0 */ // 0x806F41C4
    /* b 0x806f4328 */ // 0x806F41C8
    r3 = *(0 + r20); // lwz @ 0x806F41CC
    r4 = r18;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f4320;
    r3 = *(0 + r20); // lwz @ 0x806F41E0
    r4 = r18;
    FUN_806E4438(r4); // bl 0x806E4438
    if (!=) goto 0x0x806f41fc;
    /* li r4, 0 */ // 0x806F41F4
    /* b 0x806f4310 */ // 0x806F41F8
    r3 = *(0 + r20); // lwz @ 0x806F41FC
    r4 = r18;
    FUN_806E44C0(r4, r4); // bl 0x806E44C0
    if (==) goto 0x0x806f4218;
    r4 = *(0x70 + r30); // lwz @ 0x806F4210
    /* b 0x806f4310 */ // 0x806F4214
    r3 = *(0 + r20); // lwz @ 0x806F4218
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    r21 = r3;
    r3 = *(0 + r22); // lwz @ 0x806F4228
    /* li r4, 0 */ // 0x806F422C
    FUN_806E9970(r4, r4); // bl 0x806E9970
    if (==) goto 0x0x806f4250;
    r3 = *(0 + r22); // lwz @ 0x806F423C
    /* li r4, 1 */ // 0x806F4240
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f4268;
    r3 = *(0 + r20); // lwz @ 0x806F4250
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F425C
    /* lbzx r4, r27, r0 */ // 0x806F4260
    /* b 0x806f4288 */ // 0x806F4264
    r3 = *(0 + r20); // lwz @ 0x806F4268
    r4 = r28;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f4284;
    r4 = *(0x10 + r31); // lbz @ 0x806F427C
    /* b 0x806f4288 */ // 0x806F4280
    /* li r4, 0 */ // 0x806F4284
    r3 = r17 + r21; // 0x806F4288
    r0 = *(0x16 + r3); // lbz @ 0x806F428C
    if (!=) goto 0x0x806f430c;
    r3 = *(0 + r20); // lwz @ 0x806F4298
    r4 = r28;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f42c8;
    r3 = *(0 + r20); // lwz @ 0x806F42AC
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F42B8
    r3 = r27 + r0; // 0x806F42BC
    r0 = *(3 + r3); // lbz @ 0x806F42C0
    /* b 0x806f42e8 */ // 0x806F42C4
    r3 = *(0 + r20); // lwz @ 0x806F42C8
    r4 = r28;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f42e4;
    r0 = *(0x13 + r31); // lbz @ 0x806F42DC
    /* b 0x806f42e8 */ // 0x806F42E0
    /* li r0, 0 */ // 0x806F42E4
    if (!=) goto 0x0x806f430c;
    r0 = *(0x15 + r17); // lbz @ 0x806F42F0
    r3 = r23 << r21; // slw
    /* li r4, 2 */ // 0x806F42F8
    /* and. r0, r3, r0 */ // 0x806F42FC
    if (==) goto 0x0x806f4310;
    /* li r4, 1 */ // 0x806F4304
    /* b 0x806f4310 */ // 0x806F4308
    /* li r4, 0 */ // 0x806F430C
    if (!=) goto 0x0x806f4320;
    /* li r0, 1 */ // 0x806F4318
    /* b 0x806f433c */ // 0x806F431C
    r3 = *(0 + r24); // lwz @ 0x806F4328
    r0 = *(0x24 + r3); // lbz @ 0x806F432C
    if (<) goto 0x0x806f41cc;
    /* li r0, 0 */ // 0x806F4338
    if (==) goto 0x0x806f4364;
    r3 = *(0 + r20); // lwz @ 0x806F4344
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F4350
    r3 = r27 + r0; // 0x806F4354
    *(1 + r3) = r25; // stb @ 0x806F4358
    *(3 + r3) = r26; // stb @ 0x806F435C
    /* b 0x806f43d0 */ // 0x806F4360
    r3 = *(0 + r20); // lwz @ 0x806F4364
    r4 = r28;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f4394;
    r3 = *(0 + r20); // lwz @ 0x806F4378
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F4384
    r3 = r27 + r0; // 0x806F4388
    r17 = *(1 + r3); // lbz @ 0x806F438C
    /* b 0x806f43b4 */ // 0x806F4390
    r3 = *(0 + r20); // lwz @ 0x806F4394
    r4 = r28;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f43b0;
    r17 = *(0x11 + r31); // lbz @ 0x806F43A8
    /* b 0x806f43b4 */ // 0x806F43AC
    /* li r17, 0x14 */ // 0x806F43B0
    r3 = *(0 + r20); // lwz @ 0x806F43B4
    r4 = r28;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F43C0
    r3 = r27 + r0; // 0x806F43C4
    *(1 + r3) = r17; // stb @ 0x806F43C8
    *(3 + r3) = r26; // stb @ 0x806F43CC
    r29 = r29 + 1; // 0x806F43D0
    r3 = *(0 + r22); // lwz @ 0x806F43D4
    r0 = *(0x291c + r3); // lwz @ 0x806F43D8
    /* mulli r0, r0, 0x58 */ // 0x806F43DC
    r4 = r3 + r0; // 0x806F43E0
    r0 = *(0x58 + r4); // lbz @ 0x806F43E4
    if (<) goto 0x0x806f3dc8;
    r0 = *(0x54 + r1); // lwz @ 0x806F43F4
    return;
}