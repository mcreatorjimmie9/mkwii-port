/* Function at 0x80831CA8, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80831CA8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80831CBC
    r30 = r3;
    r0 = *(0x7c + r3); // lwz @ 0x80831CC4
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80831CC8
    if (!=) goto 0x0x80831cdc;
    /* li r4, 0 */ // 0x80831CD0
    FUN_80831A8C(r4); // bl 0x80831A8C
    /* b 0x80831d0c */ // 0x80831CD8
    /* li r4, 0 */ // 0x80831CDC
    FUN_80831A8C(r4, r4); // bl 0x80831A8C
    if (==) goto 0x0x80831d0c;
    if (==) goto 0x0x80831d0c;
    r0 = *(0xc + r30); // lha @ 0x80831CF4
    /* li r4, 3 */ // 0x80831CF8
    r3 = *(4 + r30); // lwz @ 0x80831CFC
    /* li r5, 0xc */ // 0x80831D00
    /* clrlwi r6, r0, 0x10 */ // 0x80831D04
    FUN_80827458(r4, r5); // bl 0x80827458
    r0 = *(0x14 + r1); // lwz @ 0x80831D0C
    r31 = *(0xc + r1); // lwz @ 0x80831D10
    r30 = *(8 + r1); // lwz @ 0x80831D14
    return;
}