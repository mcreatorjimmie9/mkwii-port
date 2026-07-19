/* Function at 0x808D6C0C, size=472 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808D6C0C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0xd8 + r1) = r30; // stw @ 0x808D6C20
    r30 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(0x198 + r30); // lwz @ 0x808D6C30
    if (==) goto 0x0x808d6c50;
    if (==) goto 0x0x808d6c68;
    if (==) goto 0x0x808d6ce0;
    /* b 0x808d6dbc */ // 0x808D6C4C
    r0 = r31 + 0x2580; // 0x808D6C50
    *(0x2c + r1) = r0; // stw @ 0x808D6C54
    r3 = *(0x1a0 + r30); // lwz @ 0x808D6C58
    r0 = r3 + 0x2580; // 0x808D6C5C
    *(0x30 + r1) = r0; // stw @ 0x808D6C60
    /* b 0x808d6dbc */ // 0x808D6C64
    /* lis r3, 0x6666 */ // 0x808D6C68
    r6 = r3 + 0x6667; // 0x808D6C6C
    /* mulhw r0, r6, r31 */ // 0x808D6C70
    r4 = r0 >> 2; // srawi
    r0 = r0 >> 2; // srawi
    /* srwi r3, r0, 0x1f */ // 0x808D6C7C
    /* srwi r5, r4, 0x1f */ // 0x808D6C80
    r0 = r0 + r3; // 0x808D6C84
    /* mulli r0, r0, 0xa */ // 0x808D6C88
    r3 = r4 + r5; // 0x808D6C8C
    r3 = r3 + 0x2580; // 0x808D6C90
    *(0x2c + r1) = r3; // stw @ 0x808D6C94
    /* subf r3, r0, r31 */ // 0x808D6C98
    r0 = r3 + 0x2580; // 0x808D6C9C
    *(0x30 + r1) = r0; // stw @ 0x808D6CA0
    r5 = *(0x1a0 + r30); // lwz @ 0x808D6CA4
    /* mulhw r0, r6, r5 */ // 0x808D6CA8
    r4 = r0 >> 2; // srawi
    r0 = r0 >> 2; // srawi
    /* srwi r3, r0, 0x1f */ // 0x808D6CB4
    /* srwi r6, r4, 0x1f */ // 0x808D6CB8
    r0 = r0 + r3; // 0x808D6CBC
    /* mulli r0, r0, 0xa */ // 0x808D6CC0
    r3 = r4 + r6; // 0x808D6CC4
    r3 = r3 + 0x2580; // 0x808D6CC8
    *(0x34 + r1) = r3; // stw @ 0x808D6CCC
    /* subf r3, r0, r5 */ // 0x808D6CD0
    r0 = r3 + 0x2580; // 0x808D6CD4
    *(0x38 + r1) = r0; // stw @ 0x808D6CD8
    /* b 0x808d6dbc */ // 0x808D6CDC
    /* lis r4, 0x51ec */ // 0x808D6CE0
    /* lis r3, 0x6666 */ // 0x808D6CE4
    r8 = r4 + -0x7ae1; // 0x808D6CE8
    /* mulhw r4, r8, r31 */ // 0x808D6CEC
    r0 = r3 + 0x6667; // 0x808D6CF0
    r3 = r4 >> 5; // srawi
    /* srwi r4, r3, 0x1f */ // 0x808D6CF8
    r4 = r3 + r4; // 0x808D6CFC
    /* mulhw r6, r0, r31 */ // 0x808D6D00
    r5 = r4 + 0x2580; // 0x808D6D04
    *(0x2c + r1) = r5; // stw @ 0x808D6D08
    r3 = r6 >> 2; // srawi
    /* srwi r4, r3, 0x1f */ // 0x808D6D10
    r7 = r3 + r4; // 0x808D6D14
    /* mulhw r3, r0, r7 */ // 0x808D6D18
    r5 = r3 >> 2; // srawi
    r3 = r6 >> 2; // srawi
    /* srwi r6, r5, 0x1f */ // 0x808D6D24
    /* srwi r4, r3, 0x1f */ // 0x808D6D28
    r3 = r3 + r4; // 0x808D6D2C
    r5 = r5 + r6; // 0x808D6D30
    /* mulli r4, r5, 0xa */ // 0x808D6D34
    /* mulli r3, r3, 0xa */ // 0x808D6D38
    /* subf r4, r4, r7 */ // 0x808D6D3C
    /* subf r3, r3, r31 */ // 0x808D6D40
    r4 = r4 + 0x2580; // 0x808D6D44
    r3 = r3 + 0x2580; // 0x808D6D48
    *(0x30 + r1) = r4; // stw @ 0x808D6D4C
    *(0x34 + r1) = r3; // stw @ 0x808D6D50
    r7 = *(0x1a0 + r30); // lwz @ 0x808D6D54
    /* mulhw r3, r8, r7 */ // 0x808D6D58
    r3 = r3 >> 5; // srawi
    /* srwi r4, r3, 0x1f */ // 0x808D6D60
    r4 = r3 + r4; // 0x808D6D64
    /* mulhw r5, r0, r7 */ // 0x808D6D68
    r6 = r4 + 0x2580; // 0x808D6D6C
    *(0x38 + r1) = r6; // stw @ 0x808D6D70
    r3 = r5 >> 2; // srawi
    /* srwi r4, r3, 0x1f */ // 0x808D6D78
    r6 = r3 + r4; // 0x808D6D7C
    /* mulhw r0, r0, r6 */ // 0x808D6D80
    r4 = r0 >> 2; // srawi
    r0 = r5 >> 2; // srawi
    /* srwi r5, r4, 0x1f */ // 0x808D6D8C
    /* srwi r3, r0, 0x1f */ // 0x808D6D90
    r0 = r0 + r3; // 0x808D6D94
    r4 = r4 + r5; // 0x808D6D98
    /* mulli r3, r4, 0xa */ // 0x808D6D9C
    /* subf r4, r3, r6 */ // 0x808D6DA0
    /* mulli r0, r0, 0xa */ // 0x808D6DA4
    r4 = r4 + 0x2580; // 0x808D6DA8
    *(0x3c + r1) = r4; // stw @ 0x808D6DAC
    /* subf r3, r0, r7 */ // 0x808D6DB0
    r0 = r3 + 0x2580; // 0x808D6DB4
    *(0x40 + r1) = r0; // stw @ 0x808D6DB8
    r4 = *(0x198 + r30); // lwz @ 0x808D6DBC
    r3 = r30;
    FUN_806A0A34(r3, r5); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x808D6DCC
    r31 = *(0xdc + r1); // lwz @ 0x808D6DD0
    r30 = *(0xd8 + r1); // lwz @ 0x808D6DD4
    return;
}