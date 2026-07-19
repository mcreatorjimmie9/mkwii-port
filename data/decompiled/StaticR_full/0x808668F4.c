/* Function at 0x808668F4, size=648 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_808668F4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -208(r1) */
    /* saved r25 */
    /* stmw r25, 0xb4(r1) */ // 0x80866900
    r27 = r3;
    r28 = r4;
    r29 = r5;
    /* li r25, 0 */ // 0x80866910
    r30 = r27;
    r31 = r30;
    /* li r26, 0 */ // 0x8086691C
    r3 = *(0x84 + r31); // lwz @ 0x80866920
    if (==) goto 0x0x80866940;
    r12 = *(0 + r3); // lwz @ 0x8086692C
    /* li r4, 0 */ // 0x80866930
    r12 = *(0xc + r12); // lwz @ 0x80866934
    /* mtctr r12 */ // 0x80866938
    /* bctrl  */ // 0x8086693C
    r3 = *(0x1d4 + r31); // lwz @ 0x80866940
    if (==) goto 0x0x80866960;
    r12 = *(0 + r3); // lwz @ 0x8086694C
    /* li r4, 0 */ // 0x80866950
    r12 = *(0xc + r12); // lwz @ 0x80866954
    /* mtctr r12 */ // 0x80866958
    /* bctrl  */ // 0x8086695C
    r3 = *(0x324 + r31); // lwz @ 0x80866960
    if (==) goto 0x0x80866980;
    r12 = *(0 + r3); // lwz @ 0x8086696C
    /* li r4, 0 */ // 0x80866970
    r12 = *(0xc + r12); // lwz @ 0x80866974
    /* mtctr r12 */ // 0x80866978
    /* bctrl  */ // 0x8086697C
    r26 = r26 + 1; // 0x80866980
    r31 = r31 + 4; // 0x80866984
    if (<) goto 0x0x80866920;
    r25 = r25 + 1; // 0x80866990
    r30 = r30 + 8; // 0x80866994
    if (<) goto 0x0x80866918;
    r31 = r27;
    /* li r30, 0 */ // 0x808669A4
    r0 = *(0 + r28); // lwz @ 0x808669A8
    *(0x4a0 + r31) = r0; // stw @ 0x808669AC
    if (==) goto 0x0x80866a48;
    r25 = r27 + r0; // 0x808669B8
    /* slwi r3, r0, 3 */ // 0x808669BC
    r0 = *(0x474 + r25); // lbz @ 0x808669C0
    r26 = r27 + r3; // 0x808669C4
    /* slwi r0, r0, 2 */ // 0x808669C8
    r3 = r26 + r0; // 0x808669CC
    r3 = *(0x84 + r3); // lwz @ 0x808669D0
    if (==) goto 0x0x808669f0;
    r12 = *(0 + r3); // lwz @ 0x808669DC
    /* li r4, 1 */ // 0x808669E0
    r12 = *(0xc + r12); // lwz @ 0x808669E4
    /* mtctr r12 */ // 0x808669E8
    /* bctrl  */ // 0x808669EC
    r0 = *(0x474 + r25); // lbz @ 0x808669F0
    /* slwi r0, r0, 2 */ // 0x808669F4
    r3 = r26 + r0; // 0x808669F8
    r3 = *(0x1d4 + r3); // lwz @ 0x808669FC
    if (==) goto 0x0x80866a1c;
    r12 = *(0 + r3); // lwz @ 0x80866A08
    /* li r4, 1 */ // 0x80866A0C
    r12 = *(0xc + r12); // lwz @ 0x80866A10
    /* mtctr r12 */ // 0x80866A14
    /* bctrl  */ // 0x80866A18
    r0 = *(0x474 + r25); // lbz @ 0x80866A1C
    /* slwi r0, r0, 2 */ // 0x80866A20
    r3 = r26 + r0; // 0x80866A24
    r3 = *(0x324 + r3); // lwz @ 0x80866A28
    if (==) goto 0x0x80866a48;
    r12 = *(0 + r3); // lwz @ 0x80866A34
    /* li r4, 1 */ // 0x80866A38
    r12 = *(0xc + r12); // lwz @ 0x80866A3C
    /* mtctr r12 */ // 0x80866A40
    /* bctrl  */ // 0x80866A44
    r0 = *(0 + r29); // lwz @ 0x80866A48
    *(0x4d0 + r31) = r0; // stw @ 0x80866A4C
    if (==) goto 0x0x80866ae8;
    r26 = r27 + r0; // 0x80866A58
    /* slwi r3, r0, 3 */ // 0x80866A5C
    r0 = *(0x474 + r26); // lbz @ 0x80866A60
    r25 = r27 + r3; // 0x80866A64
    /* slwi r0, r0, 2 */ // 0x80866A68
    r3 = r25 + r0; // 0x80866A6C
    r3 = *(0x84 + r3); // lwz @ 0x80866A70
    if (==) goto 0x0x80866a90;
    r12 = *(0 + r3); // lwz @ 0x80866A7C
    /* li r4, 1 */ // 0x80866A80
    r12 = *(0xc + r12); // lwz @ 0x80866A84
    /* mtctr r12 */ // 0x80866A88
    /* bctrl  */ // 0x80866A8C
    r0 = *(0x474 + r26); // lbz @ 0x80866A90
    /* slwi r0, r0, 2 */ // 0x80866A94
    r3 = r25 + r0; // 0x80866A98
    r3 = *(0x1d4 + r3); // lwz @ 0x80866A9C
    if (==) goto 0x0x80866abc;
    r12 = *(0 + r3); // lwz @ 0x80866AA8
    /* li r4, 1 */ // 0x80866AAC
    r12 = *(0xc + r12); // lwz @ 0x80866AB0
    /* mtctr r12 */ // 0x80866AB4
    /* bctrl  */ // 0x80866AB8
    r0 = *(0x474 + r26); // lbz @ 0x80866ABC
    /* slwi r0, r0, 2 */ // 0x80866AC0
    r3 = r25 + r0; // 0x80866AC4
    r3 = *(0x324 + r3); // lwz @ 0x80866AC8
    if (==) goto 0x0x80866ae8;
    r12 = *(0 + r3); // lwz @ 0x80866AD4
    /* li r4, 1 */ // 0x80866AD8
    r12 = *(0xc + r12); // lwz @ 0x80866ADC
    /* mtctr r12 */ // 0x80866AE0
    /* bctrl  */ // 0x80866AE4
    r30 = r30 + 1; // 0x80866AE8
    r31 = r31 + 4; // 0x80866AEC
    r29 = r29 + 4; // 0x80866AF4
    r28 = r28 + 4; // 0x80866AF8
    if (<) goto 0x0x808669a8;
    /* li r6, 0 */ // 0x80866B04
    *(0x20 + r1) = r8; // stw @ 0x80866B0C
    *(0x2c + r1) = r9; // stw @ 0x80866B18
    *(0x38 + r1) = r10; // stw @ 0x80866B28
    *(0x44 + r1) = r11; // stw @ 0x80866B38
    /* li r4, 4 */ // 0x80866B44
    *(0x50 + r1) = r5; // stw @ 0x80866B48
    *(0x1c + r1) = r6; // stw @ 0x80866B50
    *(8 + r1) = r7; // stw @ 0x80866B54
    *(0x5c + r1) = r8; // stw @ 0x80866B58
    *(0x68 + r1) = r9; // stw @ 0x80866B5C
    *(0x74 + r1) = r10; // stw @ 0x80866B60
    *(0x80 + r1) = r11; // stw @ 0x80866B64
    *(0x8c + r1) = r5; // stw @ 0x80866B68
    *(0x98 + r1) = r0; // stw @ 0x80866B6C
    *(0xa4 + r1) = r6; // stw @ 0x80866B70
    *(0xc + r1) = r7; // stw @ 0x80866B74
    FUN_805E3430(); // bl 0x805E3430
}