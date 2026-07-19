/* Function at 0x80726FCC, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80726FCC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x80726FE4
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80726FEC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80726FF4
    r28 = r3;
    if (!=) goto 0x0x80727008;
    /* li r3, 0 */ // 0x80727000
    /* b 0x807270bc */ // 0x80727004
    r3 = r4 + 0x74; // 0x80727008
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (!=) goto 0x0x80727020;
    /* li r3, 0 */ // 0x80727018
    /* b 0x80727024 */ // 0x8072701C
    r3 = *(0xc + r3); // lwz @ 0x80727020
    /* li r0, 0 */ // 0x80727028
    if (==) goto 0x0x80727038;
}