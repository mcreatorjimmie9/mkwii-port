/* Function at 0x80890B88, size=620 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80890B88(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 2 */ // 0x80890B90
    /* lis r0, 0x4330 */ // 0x80890B98
    *(0x2c + r1) = r31; // stw @ 0x80890B9C
    /* lis r31, 0 */ // 0x80890BA0
    r31 = r31 + 0; // 0x80890BA4
    *(0x28 + r1) = r30; // stw @ 0x80890BA8
    /* lis r30, 0 */ // 0x80890BAC
    r30 = r30 + 0; // 0x80890BB0
    *(0x24 + r1) = r29; // stw @ 0x80890BB4
    r29 = r3;
    *(0x20 + r1) = r28; // stw @ 0x80890BBC
    /* lis r28, 0 */ // 0x80890BC0
    *(8 + r1) = r0; // stw @ 0x80890BC4
    r3 = *(0 + r28); // lwz @ 0x80890BC8
    *(0x10 + r1) = r0; // stw @ 0x80890BCC
    FUN_805C5788(); // bl 0x805C5788
    if (==) goto 0x0x80890be8;
    r3 = *(0 + r28); // lwz @ 0x80890BDC
    r0 = *(0x20 + r3); // lwz @ 0x80890BE0
    /* b 0x80890bec */ // 0x80890BE4
    /* li r0, 0 */ // 0x80890BE8
    *(0xc + r1) = r0; // stw @ 0x80890BEC
    /* lis r3, 0 */ // 0x80890BF0
    r6 = *(0 + r3); // lbz @ 0x80890BF4
    /* lfd f1, 0x50(r31) */ // 0x80890BF8
    /* lfd f0, 8(r1) */ // 0x80890BFC
    /* fsubs f1, f0, f1 */ // 0x80890C04
    if (==) goto 0x0x80890c14;
    r5 = *(0x40 + r30); // lwz @ 0x80890C0C
    /* b 0x80890c60 */ // 0x80890C10
    /* fctiwz f0, f1 */ // 0x80890C14
    r7 = *(0 + r30); // lha @ 0x80890C18
    r3 = *(2 + r30); // lha @ 0x80890C1C
    /* stfd f0, 0x18(r1) */ // 0x80890C20
    r0 = *(4 + r30); // lwz @ 0x80890C24
    r5 = r7 + r3; // 0x80890C28
    r4 = *(0x1c + r1); // lwz @ 0x80890C2C
    r3 = r0 + r5; // 0x80890C30
    r0 = r4 / r3; // 0x80890C34
    r0 = r0 * r3; // 0x80890C38
    /* subf r0, r0, r4 */ // 0x80890C3C
    if (>=) goto 0x0x80890c50;
    /* li r5, 1 */ // 0x80890C48
    /* b 0x80890c60 */ // 0x80890C4C
    /* li r5, 0 */ // 0x80890C54
    if (>=) goto 0x0x80890c60;
    /* li r5, 2 */ // 0x80890C5C
    if (==) goto 0x0x80890c74;
    /* lis r3, 0 */ // 0x80890C68
    r4 = *(0 + r3); // lwz @ 0x80890C6C
    /* b 0x80890cc0 */ // 0x80890C70
    /* fctiwz f0, f1 */ // 0x80890C74
    r7 = *(0 + r30); // lha @ 0x80890C78
    r3 = *(2 + r30); // lha @ 0x80890C7C
    /* stfd f0, 0x18(r1) */ // 0x80890C80
    r0 = *(4 + r30); // lwz @ 0x80890C84
    r6 = r7 + r3; // 0x80890C88
    r4 = *(0x1c + r1); // lwz @ 0x80890C8C
    r3 = r0 + r6; // 0x80890C90
    r0 = r4 / r3; // 0x80890C94
    r0 = r0 * r3; // 0x80890C98
    /* subf r4, r0, r4 */ // 0x80890C9C
    if (>=) goto 0x0x80890cac;
    /* b 0x80890cc0 */ // 0x80890CA8
    /* subf r0, r6, r4 */ // 0x80890CB0
    if (>=) goto 0x0x80890cbc;
    /* subf r0, r7, r4 */ // 0x80890CB8
    r4 = r0;
    if (==) goto 0x0x80890cdc;
    if (==) goto 0x0x80890d10;
    if (==) goto 0x0x80890d9c;
    /* b 0x80890dcc */ // 0x80890CD8
    r0 = *(0x34 + r30); // lwz @ 0x80890CDC
    r3 = *(0xe4 + r29); // lwz @ 0x80890CE0
    r4 = r4 + r0; // 0x80890CE4
    r0 = *(0 + r30); // lha @ 0x80890CE8
    r3 = r4 + r3; // 0x80890CEC
    r3 = r3 + 0xa; // 0x80890CF0
    /* subf r0, r3, r0 */ // 0x80890CF4
    *(0xc0 + r29) = r0; // stw @ 0x80890CF8
    if (>=) goto 0x0x80890dcc;
    /* li r0, 1 */ // 0x80890D04
    *(0xc0 + r29) = r0; // stw @ 0x80890D08
    /* b 0x80890dcc */ // 0x80890D0C
    if (!=) goto 0x0x80890d2c;
    /* lfs f1, 0(r31) */ // 0x80890D18
    r3 = r29;
    /* li r4, 0x312 */ // 0x80890D20
    FUN_808A0AC8(r3, r4); // bl 0x808A0AC8
    /* b 0x80890d68 */ // 0x80890D28
    /* xoris r0, r4, 0x8000 */ // 0x80890D2C
    *(0x14 + r1) = r0; // stw @ 0x80890D30
    /* lfd f2, 0x58(r31) */ // 0x80890D34
    /* lfd f1, 0x10(r1) */ // 0x80890D38
    /* lfs f0, 0x38(r30) */ // 0x80890D3C
    /* fsubs f1, f1, f2 */ // 0x80890D40
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80890D44
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80890D48
    if (!=) goto 0x0x80890d68;
    /* lis r3, 0 */ // 0x80890D50
    /* lfs f1, 0x44(r31) */ // 0x80890D54
    r3 = *(0 + r3); // lwz @ 0x80890D58
    /* li r4, 2 */ // 0x80890D5C
    /* li r5, 0x2c */ // 0x80890D60
    FUN_8063231C(r3, r4, r5); // bl 0x8063231C
    r0 = *(2 + r30); // lha @ 0x80890D68
    /* lfd f2, 0x58(r31) */ // 0x80890D6C
    /* xoris r0, r0, 0x8000 */ // 0x80890D70
    *(0xc + r1) = r0; // stw @ 0x80890D74
    /* lfs f0, 0x48(r31) */ // 0x80890D78
    /* lfd f1, 8(r1) */ // 0x80890D7C
    /* fsubs f1, f1, f2 */ // 0x80890D80
    /* fmuls f0, f0, f1 */ // 0x80890D84
    /* fctiwz f0, f0 */ // 0x80890D88
    /* stfd f0, 0x18(r1) */ // 0x80890D8C
    r0 = *(0x1c + r1); // lwz @ 0x80890D90
    *(0xc0 + r29) = r0; // stw @ 0x80890D94
    /* b 0x80890dcc */ // 0x80890D98
    r0 = *(2 + r30); // lha @ 0x80890D9C
    /* lfd f2, 0x58(r31) */ // 0x80890DA0
    /* xoris r0, r0, 0x8000 */ // 0x80890DA4
    *(0x14 + r1) = r0; // stw @ 0x80890DA8
    /* lfs f0, 0x48(r31) */ // 0x80890DAC
    /* lfd f1, 0x10(r1) */ // 0x80890DB0
    /* fsubs f1, f1, f2 */ // 0x80890DB4
    /* fmuls f0, f0, f1 */ // 0x80890DB8
    /* fctiwz f0, f0 */ // 0x80890DBC
    /* stfd f0, 0x18(r1) */ // 0x80890DC0
    r0 = *(0x1c + r1); // lwz @ 0x80890DC4
    *(0xc0 + r29) = r0; // stw @ 0x80890DC8
    r3 = r29;
    FUN_807E7434(r3); // bl 0x807E7434
    r0 = *(0x34 + r1); // lwz @ 0x80890DD4
    r31 = *(0x2c + r1); // lwz @ 0x80890DD8
    r30 = *(0x28 + r1); // lwz @ 0x80890DDC
    r29 = *(0x24 + r1); // lwz @ 0x80890DE0
    r28 = *(0x20 + r1); // lwz @ 0x80890DE4
    return;
}