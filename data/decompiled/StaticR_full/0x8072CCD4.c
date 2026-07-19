/* Function at 0x8072CCD4, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8072CCD4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8072CCE0
    r31 = r3;
    r0 = *(0x46 + r3); // lbz @ 0x8072CCE8
    if (==) goto 0x0x8072cd08;
    r0 = *(4 + r3); // lbz @ 0x8072CCF4
    if (!=) goto 0x0x8072cd08;
    FUN_807386EC(); // bl 0x807386EC
    /* b 0x8072cd10 */ // 0x8072CD04
    r3 = r31;
    FUN_807388C8(r3); // bl 0x807388C8
    r0 = *(4 + r31); // lbz @ 0x8072CD10
    if (==) goto 0x0x8072cd24;
    r3 = r31;
    FUN_807388C8(r3); // bl 0x807388C8
    r0 = *(0x14 + r1); // lwz @ 0x8072CD24
    r31 = *(0xc + r1); // lwz @ 0x8072CD28
    return;
}