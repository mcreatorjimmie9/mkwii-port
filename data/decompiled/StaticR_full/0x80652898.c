/* Function at 0x80652898, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80652898(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806528A0
    *(0x14 + r1) = r0; // stw @ 0x806528A4
    *(0xc + r1) = r31; // stw @ 0x806528A8
    r31 = r3;
    r3 = r3 + 0xa18; // 0x806528B0
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    /* li r0, -1 */ // 0x806528B8
    *(0xc6c + r31) = r0; // stw @ 0x806528BC
    r31 = *(0xc + r1); // lwz @ 0x806528C0
    r0 = *(0x14 + r1); // lwz @ 0x806528C4
    return;
}