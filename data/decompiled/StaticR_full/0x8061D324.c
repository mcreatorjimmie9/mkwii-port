/* Function at 0x8061D324, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8061D324(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8061D32C
    *(0x14 + r1) = r0; // stw @ 0x8061D330
    r0 = *(0 + r3); // lwz @ 0x8061D334
    if (!=) goto 0x0x8061d35c;
    /* li r3, 0x38 */ // 0x8061D340
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8061d354;
    FUN_8061D3A8(r3); // bl 0x8061D3A8
    /* lis r4, 0 */ // 0x8061D354
    *(0 + r4) = r3; // stw @ 0x8061D358
    r0 = *(0x14 + r1); // lwz @ 0x8061D35C
}