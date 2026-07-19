/* Function at 0x80658E08, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80658E08(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80658E10
    /* lis r5, 0 */ // 0x80658E14
    *(0x14 + r1) = r0; // stw @ 0x80658E18
    /* li r6, 0x1d8 */ // 0x80658E1C
    r4 = r4 + 0; // 0x80658E20
    r5 = r5 + 0; // 0x80658E24
    *(0xc + r1) = r31; // stw @ 0x80658E28
    r31 = r3;
    /* li r7, 0x1e */ // 0x80658E30
    FUN_805E3430(r4, r5, r7); // bl 0x805E3430
}