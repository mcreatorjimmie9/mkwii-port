/* Function at 0x805E0048, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_805E0048(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805E0058
    r31 = r31 + 0; // 0x805E005C
    *(0x18 + r1) = r30; // stw @ 0x805E0060
    *(0x14 + r1) = r29; // stw @ 0x805E0064
    r0 = *(0x5b0 + r31); // lwz @ 0x805E0068
    if (!=) goto 0x0x805e00d4;
    r0 = *(0x5a0 + r31); // lwz @ 0x805E0074
    r30 = r31 + 0x2a0; // 0x805E0078
    /* li r4, 0x180 */ // 0x805E007C
    /* xori r0, r0, 1 */ // 0x805E0080
    *(0x5a0 + r31) = r0; // stw @ 0x805E0084
    /* mulli r0, r0, 0x180 */ // 0x805E0088
    r3 = r30 + r0; // 0x805E008C
    FUN_805E3430(r4); // bl 0x805E3430
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x5a0 + r31); // lwz @ 0x805E0098
    r29 = r3;
    /* li r4, 0 */ // 0x805E00A0
    /* li r5, 0x60 */ // 0x805E00A4
    /* mulli r0, r0, 0x180 */ // 0x805E00A8
    r3 = r30 + r0; // 0x805E00AC
    FUN_805E01B4(r4, r5); // bl 0x805E01B4
    r0 = *(0x5a0 + r31); // lwz @ 0x805E00B4
    /* li r4, 0x180 */ // 0x805E00B8
    /* mulli r0, r0, 0x180 */ // 0x805E00BC
    r3 = r30 + r0; // 0x805E00C0
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r29;
}