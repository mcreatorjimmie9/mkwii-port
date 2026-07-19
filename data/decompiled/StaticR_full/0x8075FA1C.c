/* Function at 0x8075FA1C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8075FA1C(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x8075FA24
    /* li r6, 1 */ // 0x8075FA28
    *(0x14 + r1) = r0; // stw @ 0x8075FA2C
    /* li r0, 0 */ // 0x8075FA30
    /* li r7, 0 */ // 0x8075FA38
    *(8 + r1) = r0; // stw @ 0x8075FA3C
    r0 = *(0 + r4); // lwz @ 0x8075FA40
    *(0xc + r1) = r0; // stw @ 0x8075FA48
    FUN_808A1444(r7, r4); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x8075FA50
    return;
}