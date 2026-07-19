/* Function at 0x807BDBCC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807BDBCC(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807BDBD4
    r3 = *(0x198 + r3); // lwz @ 0x807BDBD8
    r3 = *(0 + r3); // lwz @ 0x807BDBDC
    r3 = *(0x10 + r3); // lwz @ 0x807BDBE0
    r3 = *(0x144 + r3); // lwz @ 0x807BDBE4
    r3 = *(0x40 + r3); // lwz @ 0x807BDBE8
    FUN_807C8DF0(); // bl 0x807C8DF0
    /* cntlzw r0, r3 */ // 0x807BDBF0
    /* srwi r3, r0, 5 */ // 0x807BDBF4
    r0 = *(0x14 + r1); // lwz @ 0x807BDBF8
    return;
}