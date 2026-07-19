/* Function at 0x805C8D7C, size=608 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805C8D7C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r9, 0 */ // 0x805C8D84
    /* lis r8, 0 */ // 0x805C8D88
    /* lis r5, 0 */ // 0x805C8D90
    *(0x1c + r1) = r31; // stw @ 0x805C8D94
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805C8D9C
    *(0x14 + r1) = r29; // stw @ 0x805C8DA0
    *(0x10 + r1) = r28; // stw @ 0x805C8DA4
    /* b 0x805c8dd4 */ // 0x805C8DA8
    r4 = *(4 + r3); // lwz @ 0x805C8DAC
    /* clrlwi r6, r9, 0x18 */ // 0x805C8DB0
    r7 = *(0 + r8); // lwz @ 0x805C8DB4
    r0 = r9 rlwinm 2; // rlwinm
    r4 = *(0xc + r4); // lwz @ 0x805C8DBC
    r9 = r9 + 1; // 0x805C8DC0
    r6 = r7 + r6; // 0x805C8DC4
    /* lwzx r4, r4, r0 */ // 0x805C8DC8
    r0 = *(0x1f12 + r6); // lbz @ 0x805C8DCC
    *(0x22 + r4) = r0; // sth @ 0x805C8DD0
    r4 = *(0 + r5); // lwz @ 0x805C8DD4
    /* clrlwi r6, r9, 0x18 */ // 0x805C8DD8
    r0 = *(0x24 + r4); // lbz @ 0x805C8DDC
    if (<) goto 0x0x805c8dac;
    r12 = *(0 + r31); // lwz @ 0x805C8DE8
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x805C8DF0
    /* mtctr r12 */ // 0x805C8DF4
    /* bctrl  */ // 0x805C8DF8
    r3 = *(4 + r31); // lwz @ 0x805C8DFC
    r3 = *(0x14 + r3); // lwz @ 0x805C8E00
    r0 = *(0x40 + r3); // lbz @ 0x805C8E04
    if (==) goto 0x0x805c8e6c;
    /* li r28, 0 */ // 0x805C8E10
    /* lis r29, 0 */ // 0x805C8E14
    /* lis r30, 0 */ // 0x805C8E18
    /* b 0x805c8e58 */ // 0x805C8E1C
    r3 = *(0 + r29); // lwz @ 0x805C8E20
    r6 = r28 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805C8E28
    /* lwzx r3, r3, r6 */ // 0x805C8E2C
    r0 = *(0x38 + r3); // lwz @ 0x805C8E30
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805C8E34
    if (!=) goto 0x0x805c8e54;
    r3 = *(4 + r31); // lwz @ 0x805C8E3C
    /* li r4, 1 */ // 0x805C8E40
    /* li r5, 1 */ // 0x805C8E44
    r3 = *(0xc + r3); // lwz @ 0x805C8E48
    /* lwzx r3, r3, r6 */ // 0x805C8E4C
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r28 = r28 + 1; // 0x805C8E54
    r3 = *(0 + r30); // lwz @ 0x805C8E58
    /* clrlwi r4, r28, 0x18 */ // 0x805C8E5C
    r0 = *(0x24 + r3); // lbz @ 0x805C8E60
    if (<) goto 0x0x805c8e20;
    /* lis r3, 0 */ // 0x805C8E6C
    r3 = *(0 + r3); // lwz @ 0x805C8E70
    FUN_8090A598(r3); // bl 0x8090A598
    if (==) goto 0x0x805c8ea0;
    r12 = *(0 + r31); // lwz @ 0x805C8E80
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x805C8E88
    /* mtctr r12 */ // 0x805C8E8C
    /* bctrl  */ // 0x805C8E90
    r3 = *(4 + r31); // lwz @ 0x805C8E94
    /* li r0, 4 */ // 0x805C8E98
    *(0x28 + r3) = r0; // stw @ 0x805C8E9C
    r4 = *(4 + r31); // lwz @ 0x805C8EA0
    /* lis r3, 0 */ // 0x805C8EA4
    /* lfs f0, 0(r3) */ // 0x805C8EA8
    /* lfs f1, 0x44(r4) */ // 0x805C8EAC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805C8EB0
    /* cror cr0eq, cr0gt, cr0eq */ // 0x805C8EB4
    if (!=) goto 0x0x805c8fbc;
    r4 = *(0x10 + r31); // lbz @ 0x805C8EBC
    r0 = *(0xe + r31); // lhz @ 0x805C8EC0
    if (>) goto 0x0x805c8f94;
    r3 = *(0x18 + r31); // lwz @ 0x805C8ECC
    r0 = r4 rlwinm 2; // rlwinm
    /* lfsx f0, r3, r0 */ // 0x805C8ED4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805C8ED8
    if (>=) goto 0x0x805c8f34;
    if (>=) goto 0x0x805c8f08;
    /* li r0, 1 */ // 0x805C8EE8
    r3 = *(8 + r31); // lwz @ 0x805C8EEC
    r0 = r0 << r4; // slw
    r3 = r3 & r0; // 0x805C8EF4
    /* neg r0, r3 */ // 0x805C8EF8
    r0 = r0 | r3; // 0x805C8EFC
    /* srwi r0, r0, 0x1f */ // 0x805C8F00
    /* b 0x805c8f0c */ // 0x805C8F04
    /* li r0, 0 */ // 0x805C8F08
    if (!=) goto 0x0x805c8f94;
    if (>=) goto 0x0x805c8f94;
    /* li r0, 1 */ // 0x805C8F1C
    r3 = *(8 + r31); // lwz @ 0x805C8F20
    r0 = r0 << r4; // slw
    r0 = r3 | r0; // 0x805C8F28
    *(8 + r31) = r0; // stw @ 0x805C8F2C
    /* b 0x805c8f94 */ // 0x805C8F30
    r3 = *(0x14 + r31); // lwz @ 0x805C8F34
    /* lfsx f0, r3, r0 */ // 0x805C8F38
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805C8F3C
    if (<=) goto 0x0x805c8f94;
    if (>=) goto 0x0x805c8f6c;
    /* li r0, 1 */ // 0x805C8F4C
    r3 = *(8 + r31); // lwz @ 0x805C8F50
    r0 = r0 << r4; // slw
    r3 = r3 & r0; // 0x805C8F58
    /* neg r0, r3 */ // 0x805C8F5C
    r0 = r0 | r3; // 0x805C8F60
    /* srwi r0, r0, 0x1f */ // 0x805C8F64
    /* b 0x805c8f70 */ // 0x805C8F68
    /* li r0, 0 */ // 0x805C8F6C
    if (==) goto 0x0x805c8f94;
    if (>=) goto 0x0x805c8f94;
    /* li r0, 1 */ // 0x805C8F80
    r3 = *(8 + r31); // lwz @ 0x805C8F84
    r0 = r0 << r4; // slw
    /* andc r0, r3, r0 */ // 0x805C8F8C
    *(8 + r31) = r0; // stw @ 0x805C8F90
    r4 = *(0x10 + r31); // lbz @ 0x805C8F94
    r3 = *(0xe + r31); // lhz @ 0x805C8F98
    r0 = r4 + 1; // 0x805C8F9C
    *(0x10 + r31) = r0; // stb @ 0x805C8FA0
    /* clrlwi r4, r0, 0x18 */ // 0x805C8FA4
    r0 = r3 + 0xf; // 0x805C8FA8
    if (<=) goto 0x0x805c8fbc;
    /* li r0, 0 */ // 0x805C8FB4
    *(0x10 + r31) = r0; // stb @ 0x805C8FB8
    r0 = *(0x24 + r1); // lwz @ 0x805C8FBC
    r31 = *(0x1c + r1); // lwz @ 0x805C8FC0
    r30 = *(0x18 + r1); // lwz @ 0x805C8FC4
    r29 = *(0x14 + r1); // lwz @ 0x805C8FC8
    r28 = *(0x10 + r1); // lwz @ 0x805C8FCC
    return;
}