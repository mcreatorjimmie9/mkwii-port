/* Function at 0x805B31D8, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805B31D8(void)
{
    /* li r0, 0 */ // 0x805B31D8
    *(0xc6 + r3) = r0; // sth @ 0x805B31DC
    *(0xc8 + r3) = r0; // sth @ 0x805B31E0
    *(0x1b2 + r3) = r0; // sth @ 0x805B31E4
    *(0x1b4 + r3) = r0; // sth @ 0x805B31E8
    *(0x29e + r3) = r0; // sth @ 0x805B31EC
    *(0x2a0 + r3) = r0; // sth @ 0x805B31F0
    *(0x38a + r3) = r0; // sth @ 0x805B31F4
    *(0x38c + r3) = r0; // sth @ 0x805B31F8
    return;
}