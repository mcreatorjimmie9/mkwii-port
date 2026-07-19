/* Function at 0x80880C9C, size=412 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80880C9C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80880CA4
    /* lis r4, 0 */ // 0x80880CA8
    *(0x24 + r1) = r0; // stw @ 0x80880CAC
    /* li r0, 2 */ // 0x80880CB0
    /* lfd f3, 0(r5) */ // 0x80880CB4
    r6 = r3;
    *(0x1c + r1) = r31; // stw @ 0x80880CBC
    /* li r5, 0 */ // 0x80880CC0
    /* lfs f0, 0(r4) */ // 0x80880CC4
    /* lis r4, 0x4330 */ // 0x80880CC8
    *(0x18 + r1) = r30; // stw @ 0x80880CCC
    *(0x14 + r1) = r29; // stw @ 0x80880CD0
    /* mtctr r0 */ // 0x80880CD4
    r0 = *(0x174 + r6); // lwz @ 0x80880CD8
    *(8 + r1) = r4; // stw @ 0x80880CDC
    /* xoris r0, r0, 0x8000 */ // 0x80880CE0
    /* lfs f1, 0x178(r6) */ // 0x80880CE4
    *(0xc + r1) = r0; // stw @ 0x80880CE8
    /* lfd f2, 8(r1) */ // 0x80880CEC
    /* fsubs f2, f2, f3 */ // 0x80880CF0
    /* fsubs f1, f2, f1 */ // 0x80880CF4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80880CF8
    if (<=) goto 0x0x80880d08;
    /* li r3, 1 */ // 0x80880D00
    /* b 0x80880e1c */ // 0x80880D04
    r0 = *(0x188 + r6); // lwz @ 0x80880D08
    *(8 + r1) = r4; // stw @ 0x80880D0C
    /* xoris r0, r0, 0x8000 */ // 0x80880D10
    /* lfs f1, 0x18c(r6) */ // 0x80880D14
    *(0xc + r1) = r0; // stw @ 0x80880D18
    /* lfd f2, 8(r1) */ // 0x80880D1C
    /* fsubs f2, f2, f3 */ // 0x80880D20
    /* fsubs f1, f2, f1 */ // 0x80880D24
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80880D28
    if (<=) goto 0x0x80880d38;
    /* li r3, 1 */ // 0x80880D30
    /* b 0x80880e1c */ // 0x80880D34
    r0 = *(0x19c + r6); // lwz @ 0x80880D38
    *(8 + r1) = r4; // stw @ 0x80880D3C
    /* xoris r0, r0, 0x8000 */ // 0x80880D40
    /* lfs f1, 0x1a0(r6) */ // 0x80880D44
    *(0xc + r1) = r0; // stw @ 0x80880D48
    /* lfd f2, 8(r1) */ // 0x80880D4C
    /* fsubs f2, f2, f3 */ // 0x80880D50
    /* fsubs f1, f2, f1 */ // 0x80880D54
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80880D58
    if (<=) goto 0x0x80880d68;
    /* li r3, 1 */ // 0x80880D60
    /* b 0x80880e1c */ // 0x80880D64
    r6 = r6 + 0x3c; // 0x80880D68
    r5 = r5 + 2; // 0x80880D6C
    if (counter-- != 0) goto 0x0x80880cd8;
    r5 = *(0xb74 + r3); // lwz @ 0x80880D74
    /* lis r0, 0x4330 */ // 0x80880D78
    /* lis r6, 0 */ // 0x80880D7C
    /* lis r4, 0 */ // 0x80880D80
    /* xoris r5, r5, 0x8000 */ // 0x80880D84
    *(0xc + r1) = r5; // stw @ 0x80880D88
    /* lfd f3, 0(r6) */ // 0x80880D8C
    *(8 + r1) = r0; // stw @ 0x80880D90
    /* lfs f1, 0xb70(r3) */ // 0x80880D94
    /* lfd f2, 8(r1) */ // 0x80880D98
    /* lfs f0, 0(r4) */ // 0x80880D9C
    /* fsubs f2, f2, f3 */ // 0x80880DA0
    /* fsubs f1, f2, f1 */ // 0x80880DA4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80880DA8
    if (<=) goto 0x0x80880db8;
    /* li r3, 1 */ // 0x80880DB0
    /* b 0x80880e1c */ // 0x80880DB4
    r30 = r3;
    /* li r29, 0 */ // 0x80880DBC
    r3 = *(0xb78 + r30); // lwz @ 0x80880DC0
    if (==) goto 0x0x80880e08;
    r0 = *(0x198 + r3); // lbz @ 0x80880DCC
    /* li r31, 1 */ // 0x80880DD0
    if (==) goto 0x0x80880df8;
    r3 = r3 + 0x98; // 0x80880DDC
    /* li r4, 0 */ // 0x80880DE0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80880DE8
    if (==) goto 0x0x80880df8;
    /* li r31, 0 */ // 0x80880DF4
    if (==) goto 0x0x80880e08;
    /* li r3, 1 */ // 0x80880E00
    /* b 0x80880e1c */ // 0x80880E04
    r29 = r29 + 1; // 0x80880E08
    r30 = r30 + 4; // 0x80880E0C
    if (<) goto 0x0x80880dc0;
    /* li r3, 0 */ // 0x80880E18
    r0 = *(0x24 + r1); // lwz @ 0x80880E1C
    r31 = *(0x1c + r1); // lwz @ 0x80880E20
    r30 = *(0x18 + r1); // lwz @ 0x80880E24
    r29 = *(0x14 + r1); // lwz @ 0x80880E28
    return;
}