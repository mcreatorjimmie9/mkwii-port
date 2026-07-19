/* Function at 0x8065EEFC, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8065EEFC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8065EF0C
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8065EF18
    r3 = r30 + 0x44; // 0x8065EF1C
    r4 = r4 + 0; // 0x8065EF20
    *(0 + r30) = r4; // stw @ 0x8065EF24
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    /* li r0, 0 */ // 0x8065EF2C
    *(0x304 + r30) = r30; // stw @ 0x8065EF30
    r3 = r30 + 0x30c; // 0x8065EF34
    *(0x300 + r30) = r0; // stw @ 0x8065EF38
    FUN_805ABCB4(r3); // bl 0x805ABCB4
    /* li r3, 0x2800 */ // 0x8065EF40
    /* li r4, 0x20 */ // 0x8065EF44
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
}