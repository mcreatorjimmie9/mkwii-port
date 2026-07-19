/* Function at 0x8082B038, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8082B038(int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    r8 = r7;
    /* li r7, 0 */ // 0x8082B044
    *(0x14 + r1) = r0; // stw @ 0x8082B048
    /* li r0, 0 */ // 0x8082B04C
    /* li r9, 0 */ // 0x8082B050
    /* li r10, 0 */ // 0x8082B054
    *(8 + r1) = r0; // stw @ 0x8082B058
    FUN_8082B0D4(r9, r10); // bl 0x8082B0D4
    r0 = *(0x14 + r1); // lwz @ 0x8082B060
    return;
}