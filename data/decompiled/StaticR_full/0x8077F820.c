/* Function at 0x8077F820, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8077F820(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x8077F828
    /* lis r5, 0 */ // 0x8077F82C
    *(0x14 + r1) = r0; // stw @ 0x8077F830
    r6 = r6 + 0; // 0x8077F834
    /* li r7, 0 */ // 0x8077F83C
    r0 = *(0 + r5); // lwz @ 0x8077F840
    r6 = *(0 + r6); // lwz @ 0x8077F848
    *(0xc + r1) = r6; // stw @ 0x8077F84C
    /* li r6, 1 */ // 0x8077F850
    *(8 + r1) = r0; // stw @ 0x8077F854
    FUN_808A1444(r5, r6); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x8077F85C
    return;
}