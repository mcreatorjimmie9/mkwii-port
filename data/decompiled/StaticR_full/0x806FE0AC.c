/* Function at 0x806FE0AC, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806FE0AC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806FE0B8
    r31 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FE0C0
    if (!=) goto 0x0x806fe0dc;
    /* li r0, 2 */ // 0x806FE0CC
    *(0x14 + r3) = r0; // stw @ 0x806FE0D0
    /* li r3, 0 */ // 0x806FE0D4
    /* b 0x806fe170 */ // 0x806FE0D8
    r3 = *(0x757c + r3); // lwz @ 0x806FE0DC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fe0fc;
    /* li r0, 6 */ // 0x806FE0EC
    *(0x14 + r31) = r0; // stw @ 0x806FE0F0
    /* li r3, 0 */ // 0x806FE0F4
}