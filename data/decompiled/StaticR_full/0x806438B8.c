/* Function at 0x806438B8, size=464 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 11 function(s) */

int FUN_806438B8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x806438CC
    r4 = *(0 + r3); // lwz @ 0x806438D0
    r4 = *(4 + r4); // lwz @ 0x806438D4
    r0 = *(0x14 + r4); // lwz @ 0x806438D8
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x806438DC
    if (==) goto 0x0x8064399c;
    r0 = *(8 + r4); // lwz @ 0x806438E4
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x806438E8
    if (==) goto 0x0x80643a70;
    FUN_8061ECE4(); // bl 0x8061ECE4
    r0 = *(0x1c + r3); // lwz @ 0x806438F4
    r4 = *(0x18 + r3); // lwz @ 0x806438F8
    r0 = r0 rlwinm 0x16; // rlwinm
    r3 = r4 rlwinm 0x16; // rlwinm
    if (==) goto 0x0x80643964;
    r3 = *(0 + r31); // lwz @ 0x8064390C
    r3 = *(4 + r3); // lwz @ 0x80643910
    r0 = *(8 + r3); // lwz @ 0x80643914
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80643918
    if (!=) goto 0x0x80643964;
    r3 = r31;
    FUN_8061ECC8(r3); // bl 0x8061ECC8
    r3 = *(0xa1 + r3); // lbz @ 0x80643928
    *(0x7a + r31) = r3; // stb @ 0x8064392C
    if (>=) goto 0x0x80643940;
    /* li r3, 1 */ // 0x80643938
    /* b 0x8064394c */ // 0x8064393C
    if (<=) goto 0x0x8064394c;
    /* li r3, 4 */ // 0x80643948
    /* clrlwi r0, r3, 0x18 */ // 0x8064394C
    *(0x7a + r31) = r3; // stb @ 0x80643950
    r4 = *(0x4c + r31); // lwz @ 0x80643954
    r3 = r31;
    /* extsb r5, r0 */ // 0x8064395C
    FUN_80643A88(r3); // bl 0x80643A88
    r4 = *(0 + r31); // lwz @ 0x80643964
    r3 = *(4 + r4); // lwz @ 0x80643968
    r0 = *(0x1c + r3); // lwz @ 0x8064396C
    if (!=) goto 0x0x80643a70;
    r3 = *(4 + r4); // lwz @ 0x80643978
    r0 = *(8 + r3); // lwz @ 0x8064397C
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80643980
    if (!=) goto 0x0x80643a70;
    r3 = r31;
    FUN_8061E01C(r3); // bl 0x8061E01C
    /* li r4, 3 */ // 0x80643990
    FUN_808F4CC0(r3, r4); // bl 0x808F4CC0
    /* b 0x80643a70 */ // 0x80643998
    FUN_8061DC70(r3, r4); // bl 0x8061DC70
    r30 = *(0x3a + r3); // lbz @ 0x806439A0
    r3 = r31;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r3 = *(0x258 + r3); // lwz @ 0x806439AC
    r4 = r30;
    FUN_8060358C(r3, r4); // bl 0x8060358C
    if (==) goto 0x0x806439cc;
    /* li r0, 0xa */ // 0x806439C0
    *(0x78 + r31) = r0; // sth @ 0x806439C4
    *(0x7a + r31) = r30; // stb @ 0x806439C8
    r3 = *(0 + r31); // lwz @ 0x806439CC
    r4 = *(4 + r3); // lwz @ 0x806439D0
    r4 = *(8 + r4); // lwz @ 0x806439D4
    /* rlwinm. r0, r4, 0, 0x15, 0x15 */ // 0x806439D8
    if (==) goto 0x0x80643a54;
    /* rlwinm. r0, r4, 0, 0x10, 0x10 */ // 0x806439E0
    if (!=) goto 0x0x80643a20;
    r0 = *(0x78 + r31); // lha @ 0x806439E8
    if (<=) goto 0x0x80643a20;
    r3 = *(4 + r3); // lwz @ 0x806439F4
    r0 = *(0x1c + r3); // lwz @ 0x806439F8
    if (<=) goto 0x0x80643a20;
    if (>=) goto 0x0x80643a20;
    r0 = *(0x7a + r31); // lbz @ 0x80643A0C
    r3 = r31;
    r4 = *(0x4c + r31); // lwz @ 0x80643A14
    /* extsb r5, r0 */ // 0x80643A18
    FUN_80643A88(r3); // bl 0x80643A88
    r4 = *(0 + r31); // lwz @ 0x80643A20
    r3 = *(4 + r4); // lwz @ 0x80643A24
    r0 = *(0x1c + r3); // lwz @ 0x80643A28
    if (!=) goto 0x0x80643a54;
    r3 = *(4 + r4); // lwz @ 0x80643A34
    r0 = *(8 + r3); // lwz @ 0x80643A38
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80643A3C
    if (!=) goto 0x0x80643a54;
    r3 = r31;
    FUN_8061E01C(r3); // bl 0x8061E01C
    /* li r4, 3 */ // 0x80643A4C
    FUN_808F4CC0(r3, r4); // bl 0x808F4CC0
    r3 = *(0x78 + r31); // lha @ 0x80643A54
    r0 = r3 + -1; // 0x80643A58
    *(0x78 + r31) = r0; // sth @ 0x80643A5C
    /* extsh. r0, r0 */ // 0x80643A60
    if (>=) goto 0x0x80643a70;
    /* li r0, 0 */ // 0x80643A68
    *(0x78 + r31) = r0; // sth @ 0x80643A6C
    r0 = *(0x14 + r1); // lwz @ 0x80643A70
    r31 = *(0xc + r1); // lwz @ 0x80643A74
    r30 = *(8 + r1); // lwz @ 0x80643A78
    return;
}