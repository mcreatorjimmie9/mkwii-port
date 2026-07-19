/* Function at 0x8065A790, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8065A790(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8065A79C
    r31 = r3;
    FUN_806497A4(); // bl 0x806497A4
    /* lis r3, 0 */ // 0x8065A7A8
    /* li r0, 0 */ // 0x8065A7AC
    r3 = r3 + 0; // 0x8065A7B0
    *(0 + r31) = r3; // stw @ 0x8065A7B4
    r3 = r31;
    *(0x260 + r31) = r0; // stb @ 0x8065A7BC
    r31 = *(0xc + r1); // lwz @ 0x8065A7C0
    r0 = *(0x14 + r1); // lwz @ 0x8065A7C4
    return;
}