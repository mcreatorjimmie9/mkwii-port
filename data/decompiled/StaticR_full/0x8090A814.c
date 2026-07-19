/* Function at 0x8090A814, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_8090A814(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8090A820
    /* lis r31, 0 */ // 0x8090A824
    r3 = *(0 + r31); // lwz @ 0x8090A828
    if (==) goto 0x0x8090a844;
    /* li r4, 1 */ // 0x8090A834
    FUN_8090AFB4(r4); // bl 0x8090AFB4
    /* li r0, 0 */ // 0x8090A83C
    *(0 + r31) = r0; // stw @ 0x8090A840
    r0 = *(0x14 + r1); // lwz @ 0x8090A844
    r31 = *(0xc + r1); // lwz @ 0x8090A848
    return;
}