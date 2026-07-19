/* Function at 0x808AA918, size=68 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808AA918(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808AA920
    /* lis r4, 0 */ // 0x808AA924
    *(0x24 + r1) = r0; // stw @ 0x808AA928
    /* lis r0, 0x4330 */ // 0x808AA92C
    r5 = r5 + 0; // 0x808AA930
    r4 = r4 + 0; // 0x808AA934
    *(0x1c + r1) = r31; // stw @ 0x808AA938
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808AA940
    *(8 + r1) = r0; // stw @ 0x808AA944
    *(0x10 + r1) = r0; // stw @ 0x808AA948
    *(0 + r3) = r5; // stw @ 0x808AA94C
    *(0x134 + r3) = r4; // stw @ 0x808AA950
    /* li r3, 0x10 */ // 0x808AA954
    FUN_805E3430(r3); // bl 0x805E3430
}