/* Function at 0x80680F64, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_80680F64(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80680F74
    r30 = r3;
    r4 = *(0x4b0 + r3); // lwz @ 0x80680F7C
    if (!=) goto 0x0x80680f90;
    FUN_80671C3C(); // bl 0x80671C3C
    /* b 0x80681038 */ // 0x80680F8C
    /* lis r3, 0 */ // 0x80680F90
    r3 = *(0 + r3); // lwz @ 0x80680F94
    r3 = r3 + 0x34; // 0x80680F98
    FUN_8067F3DC(r3, r3); // bl 0x8067F3DC
    r4 = *(0x4b0 + r30); // lwz @ 0x80680FA0
    r31 = r3;
    r5 = *(0x4b4 + r30); // lbz @ 0x80680FA8
    r3 = r30 + 0x44; // 0x80680FAC
    /* li r6, 0 */ // 0x80680FB0
    FUN_80670D14(r3, r6); // bl 0x80670D14
    r4 = *(0x4b8 + r30); // lwz @ 0x80680FB8
    r3 = r30 + 0x44; // 0x80680FBC
    FUN_80670D24(r3, r6, r3); // bl 0x80670D24
    r4 = *(0x4b8 + r30); // lwz @ 0x80680FC4
    r3 = r31;
    FUN_8067FAAC(r3, r3); // bl 0x8067FAAC
    if (==) goto 0x0x80680ff4;
    /* li r0, 1 */ // 0x80680FD8
    *(0x4bc + r30) = r0; // stw @ 0x80680FDC
    r3 = r30 + 0x1c8; // 0x80680FE0
    /* li r4, 0x26af */ // 0x80680FE4
    /* li r5, 0 */ // 0x80680FE8
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* b 0x8068100c */ // 0x80680FF0
    /* li r0, 0 */ // 0x80680FF4
    *(0x4bc + r30) = r0; // stw @ 0x80680FF8
    r3 = r30 + 0x1c8; // 0x80680FFC
    /* li r4, 0x26ac */ // 0x80681000
    /* li r5, 0 */ // 0x80681004
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    /* li r4, 0x1e */ // 0x80681010
    /* li r5, -1 */ // 0x80681014
    FUN_806724B8(r5, r3, r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x8068101C
    /* lis r5, 0 */ // 0x80681020
    /* lfs f1, 0(r5) */ // 0x80681024
    /* li r4, 5 */ // 0x80681028
    r3 = *(0 + r3); // lwz @ 0x8068102C
    /* li r5, 0x1e */ // 0x80681030
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x80681038
    r31 = *(0xc + r1); // lwz @ 0x8068103C
    r30 = *(8 + r1); // lwz @ 0x80681040
    return;
}