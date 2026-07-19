/* Function at 0x80727744, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80727744(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* slwi r0, r5, 2 */ // 0x80727750
    r31 = r4 + r0; // 0x80727758
    *(0x18 + r1) = r30; // stw @ 0x8072775C
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80727764
    r29 = r6;
    /* b 0x807277d4 */ // 0x8072776C
    r3 = *(0 + r31); // lwz @ 0x80727770
    if (==) goto 0x0x807277cc;
    r3 = r3 + 0x74; // 0x8072777C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80727794;
    /* li r3, 0 */ // 0x8072778C
    /* b 0x80727798 */ // 0x80727790
    r3 = *(0xc + r3); // lwz @ 0x80727794
    /* li r0, 0 */ // 0x8072779C
    if (==) goto 0x0x807277ac;
    if (!=) goto 0x0x807277b0;
    /* li r0, 1 */ // 0x807277AC
}