/* Function at 0x80626384, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80626384(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x8062638C
    *(0x14 + r1) = r0; // stw @ 0x80626390
    *(0xc + r1) = r31; // stw @ 0x80626394
    r31 = r3;
    FUN_806200C4(r5); // bl 0x806200C4
    /* lis r3, 0 */ // 0x806263A0
    /* li r0, 0 */ // 0x806263A4
    r3 = r3 + 0; // 0x806263A8
    *(0xc + r31) = r3; // stw @ 0x806263AC
    r3 = r31;
    *(0x90 + r31) = r0; // stw @ 0x806263B4
    r31 = *(0xc + r1); // lwz @ 0x806263B8
    r0 = *(0x14 + r1); // lwz @ 0x806263BC
    return;
}