#include "cinder/app/App.h"
#include "metal.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MetalBasicApp : public App
{
public:
    
    void setup() override;
    void resize() override;
    void update() override;
    void draw() override;
    
    mtl::RenderPassDescriptorRef mRenderDescriptor;
};

void MetalBasicApp::setup()
{
    mRenderDescriptor = mtl::RenderPassDescriptor::create();
}

void MetalBasicApp::resize()
{
}

void MetalBasicApp::update()
{
}

void MetalBasicApp::draw()
{
    mtl::ScopedRenderCommandBuffer renderBuffer;
    mtl::ScopedRenderEncoder renderEncoder = renderBuffer.scopedRenderEncoder(mRenderDescriptor);
    
    // Put your drawing here
    
    mtl::color(1, 0, 0);
    renderEncoder.drawSolidRect(Rectf(-0.5,-0.5,0.5,0.5));
}

CINDER_APP( MetalBasicApp, RendererMetal )