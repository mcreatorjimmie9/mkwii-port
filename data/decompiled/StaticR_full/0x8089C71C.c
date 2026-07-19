/* Function at 0x8089C71C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089C71C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x8089C724
    *(0x14 + r1) = r0; // stw @ 0x8089C728
    *(0xc + r1) = r31; // stw @ 0x8089C72C
    r0 = *(0 + r3); // lwz @ 0x8089C730
    if (!=) goto 0x0x8089c788;
    /* li r3, 0x20 */ // 0x8089C73C
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x8089c780;
    /* lis r4, 0 */ // 0x8089C750
    r4 = r4 + 0; // 0x8089C754
    *(0 + r3) = r4; // stw @ 0x8089C758
    /* li r3, 0x190 */ // 0x8089C75C
}