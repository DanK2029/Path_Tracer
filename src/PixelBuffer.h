#pragma once
#include <Memory>

class PixelBuffer
{
public:
	PixelBuffer(unsigned int width, unsigned int height);
	PixelBuffer(const PixelBuffer& pixelBuffer);
	~PixelBuffer();

	void SetPixel(unsigned int x, unsigned int y, float pixel[3]);
	float* GetPixels();

	void ResizeBuffer(unsigned int width, unsigned int height);

private:
	unsigned int m_Width, m_Height;
	std::shared_ptr<float> m_Buffer;
};