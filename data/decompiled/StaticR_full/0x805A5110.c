/* Function at 0x805A5110, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805A5110(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805A5118
    /* li r6, 0x18 */ // 0x805A511C
    *(0x14 + r1) = r0; // stw @ 0x805A5120
    r5 = r5 + 0; // 0x805A5124
    /* li r7, 6 */ // 0x805A5128
    *(0xc + r1) = r31; // stw @ 0x805A512C
    /* li r31, 0 */ // 0x805A5130
    *(8 + r1) = r30; // stw @ 0x805A5134
    r30 = r3;
    *(0 + r3) = r4; // stw @ 0x805A513C
    /* lis r4, 0 */ // 0x805A5140
    r4 = r4 + 0; // 0x805A5144
    *(4 + r3) = r31; // sth @ 0x805A5148
    *(6 + r3) = r31; // sth @ 0x805A514C
    *(0x18 + r3) = r31; // sth @ 0x805A5150
    *(0x1a + r3) = r31; // sth @ 0x805A5154
    r3 = r3 + 0x38; // 0x805A5158
    FUN_805E3430(r3); // bl 0x805E3430
}